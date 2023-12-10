#include <iostream>
#include <functional>

// Algotester Lab 7-8 V3
// Binary Search Tree (AVL)

// https://www.youtube.com/watch?v=DB1HFCEdLxA
// https://www.youtube.com/watch?v=JPI-DPizQYk
// https://www.youtube.com/watch?v=PBkXmhiCP1M

// TODO: Add iterators
template <class T>
class AVL {
protected:
    struct Node {
    public:
        T value;
        size_t height;
        // Node* parent;
        Node* left;
        Node* right;

        Node(T value, size_t height, Node* left, Node* right)
                : value(value), height(height), left(left), right(right) {}

        Node()  : height(0), left(nullptr), right(nullptr) {}

        explicit Node(T value) : Node(value, 0, nullptr, nullptr) {}
    };

    // Helper for finalizer
    void delete_tree(Node* _root) {
        if (_root == nullptr) return;

        delete_tree(_root->left);
        delete_tree(_root->right);
        delete _root;
    }

    Node* find(T value) {
        Node* current = root;
        while (current != nullptr) {
            if (current->value == value) return current;
            if (value < current->value) current = current->left;
            else current = current->right;
        }
        return nullptr;
    }

    Node* _append_node(Node* _root, T value) {
        if (_root == nullptr) {
            _size++;
            return new Node(value);
        }

        // traverse the tree to find the right place for the new node
        if (value < _root->value)
            _root->left = _append_node(_root->left, value);
        else if (value > _root->value)
            _root->right = _append_node(_root->right, value);

        // Balance the tree

        // Update height of the root
        int left_height     = height(_root->left),
            right_height    = height(_root->right);
        // determine height of root (max of left or right subtree + 1)
        // (because it is the longest path from root to leaf)
        _root->height = 1 + std::max(left_height, right_height);

        // determine balance factor
        int balance_factor = left_height - right_height;

        // if balance_factor is greater than 1
        // then tree is left heavy -> right rotation
        if (balance_factor > 1) {
            if (value < _root->left->value) {
                return right_rotation(_root);
            } else {
                // left rotation on left subtree (because it is right heavy)
                _root->left = left_rotation(_root->left);
                return right_rotation(_root);
            }
        }
        // if balance_factor is less than -1
        // then tree is right heavy -> left rotation
        else if (balance_factor < -1) {
            if (value > _root->right->value) {
                return left_rotation(_root);
            } else {
                // right rotation on right subtree (because it is left heavy)
                _root->right = right_rotation(_root->right);
                return left_rotation(_root);
            }
        }
        return _root;
    }

    Node* _remove_node(Node* _root, T value) {
        if (_root == nullptr) return nullptr;

        // traverse the tree to find the right node
        if (value < _root->value) {
            _root->left = _remove_node(_root->left, value);
        } else if (value > _root->value) {
            _root->right = _remove_node(_root->right, value);
        } else /* if reached the value */ {
            Node *r = _root->right;
            if (_root->right == nullptr) {
                Node *l = _root->left;
                delete _root;
                _root = l;
            } else if (_root->left == nullptr) {
                delete _root;
                _root = r;
            } else /* if both leaves are present */ {
                // find the smallest value in the right subtree
                while (r->left != nullptr) r = r->left;

                // and replace the root with it
                _root->value = r->value;
                _root->right = _remove_node(_root->right, r->value);
            }
        }

        if (_root == nullptr) return nullptr;

        // Balance the tree

        // Update height of the root
        int left_height = height(_root->left),
            right_height = height(_root->right);
        // determine height of root (max of left or right subtree + 1)
        // (because it is the longest path from root to leaf)
        _root->height = 1 + std::max(left_height, right_height);

        // determine balance factor
        int balance_factor = left_height - right_height;
        if (balance_factor > 1) {
            if (height(_root->left) >= height(_root->right))
                return right_rotation(_root);
            else {
                _root->left = left_rotation(_root->left);
                return right_rotation(_root);
            }
        } else if (balance_factor < -1) {
            if (height(_root->right) >= height(_root->left))
                return left_rotation(_root);
            else {
                _root->right = right_rotation(_root->right);
                return left_rotation(_root);
            }
        }
        return _root;
    }

    size_t height(Node* node) {
        return node == nullptr ? 0 : node->height;
    }

    Node* right_rotation(Node* _root) {
        // new root is the left child of the old root
        // (anti-clockwise rotation)
        Node *new_root = _root->left;

        _root->left = new_root->right;
        // new root's right child is the old root
        new_root->right = _root;

        // update heights
        _root->height = 1 + std::max(
                height(_root->left),
                height(_root->right)
        );
        new_root->height = 1 + std::max(
                height(new_root->left),
                height(new_root->right)
        );

        return new_root;
    }

    Node* left_rotation(Node* _root){
        // new root is the right child of the old root
        // (clockwise rotation)
        Node* new_root = _root->right;

        _root->right = new_root->left;
        // new root's left child is the old root
        new_root->left = _root;

        // update heights
        _root->height = 1 + std::max(
                height(_root->left),
                height(_root->right)
        );
        new_root->height = 1 + std::max(
                height(new_root->left),
                height(new_root->right)
        );

        return new_root;
    }

private:
    Node* root;
    int _size;

public:
    enum Traversal {
        PREORDER,
        INORDER,
        POSTORDER
    };

    AVL() {
        root = nullptr;
        _size = 0;
    }

    AVL(std::initializer_list<T> list) {
        root = nullptr;
        _size = 0;
        for (auto value : list) {
            emplace(value);
        }
    }

    ~AVL() {
        delete_tree(root);
    }

    int size() {
        return _size;
    }

    void emplace(T value) {
        root = _append_node(root, value);
    }

    bool contains(T value) {
        return find(value) != nullptr;
    }

    void remove(T value) {
        root = _remove_node(root, value);
    }

    void forEach(std::function<void(T)> func, Traversal traversal = Traversal::INORDER) {
        std::function<void(Node*)> _func = [&](Node* node) {
            if (node == nullptr) return;
            if (traversal == Traversal::PREORDER) func(node->value);
            _func(node->left);
            if (traversal == Traversal::INORDER) func(node->value);
            _func(node->right);
            if (traversal == Traversal::POSTORDER) func(node->value);
        };
        _func(root);
    }
};

template <class T>
std::ostream& operator<<(std::ostream& os, AVL<T>& _tree) {
    _tree.forEach([&](T value) {
        os << value << " ";
    }, AVL<T>::Traversal::INORDER);
    return os;
}

int main() {
    using namespace std;
    AVL<int> tree;

    int queries;
    string query;
    cin >> queries;

    for (int i = 0; i < queries; ++i) {
        cin >> query;

        try {
            if (query == "insert") {
                int element;
                cin >> element;
                tree.emplace(element);
            }  else if (query == "size") {
                cout << tree.size() << endl;
            }  else if (query == "print") {
                cout << tree << endl;
            } else if (query == "contains") {
                int element;
                cin >> element;
                cout << (tree.contains(element) ? "Yes" : "No") << endl;
            } else if (query == "remove") {
                int element;
                cin >> element;
                tree.remove(element);
            }
        }
        catch (out_of_range& e) {}
        catch (exception& e) {}
    }

    return 0;
}
