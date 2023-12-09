#include <iostream>
#include <functional>

// Algotester Lab 7-8 V3
// Binary Search Tree

// TODO: Add iterators
template <class T>
class BST {
protected:
    struct Node {
    public:
        T value;
        struct Node* parent;
        struct Node* left;
        struct Node* right;

        Node(T value, Node* parent, Node* left, Node* right)
            : value(value), parent(parent), left(left), right(right) {}

        Node() : left(nullptr), right(nullptr), parent(nullptr) {}

        explicit Node(T value)
            : Node(value, nullptr, nullptr, nullptr) {}
    };

    void emplace(Node* _root, T value) {
        if (_root == nullptr) return;
        if (_root->value == value) return;

        if (value < _root->value) {
            if (_root->left == nullptr)
                _root->left = new Node(value, _root, nullptr, nullptr);
            else emplace(_root->left, value);
        } else {
            if (_root->right == nullptr)
                _root->right = new Node(value, _root, nullptr, nullptr);
            else emplace(_root->right, value);
        }
    }

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

    void append_node(Node* node, Node* _root) {
        if (node == nullptr) return;

        if (_root == nullptr) {
            root = node;
            _size++;
            return;
        }

        if (node->value < _root->value) {
            if (_root->left == nullptr) {
                _root->left = node;
                node->parent = _root;
                _size++;
            } else append_node(node, _root->left);
        } else if (node->value > _root->value) {
            if (_root->right == nullptr) {
                _root->right = node;
                node->parent = _root;
                _size++;
            } else append_node(node, _root->right);
        }
    }

    void remove_node(Node* node) {
        if (node->parent == nullptr) {
            root = nullptr;

            Node* left = node->left, *right = node->right;
            delete node;

            if (left != nullptr) {
                root = left;
                left->parent = nullptr;
                append_node(right, root);
            } else if (right != nullptr) {
                root = right;
                right->parent = nullptr;
            }

            _size--;
            return;
        }

        if (node->parent->left == node) node->parent->left = nullptr;
        else node->parent->right = nullptr;

        Node* left = node->left, *right = node->right;

        delete node;
        _size--;

        append_node(left, root);
        append_node(right, root);
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

    BST() {
        root = nullptr;
        _size = 0;
    }

    BST(std::initializer_list<T> list) {
        root = nullptr;
        _size = 0;
        for (auto value : list) {
            emplace(value);
        }
    }

    ~BST() {
        delete_tree(root);
    }

    int size() {
        return _size;
    }

    void emplace(T value) {
        append_node(new Node(value), root);
    }

    bool contains(T value) {
        return find(value) != nullptr;
    }

    void remove(T value) {
        Node* node = find(value);
        if (node == nullptr) return;
        remove_node(node);
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
std::ostream& operator<<(std::ostream& os, BST<T>& bst) {
    bst.forEach([&](T value) {
        os << value << " ";
    }, BST<T>::Traversal::INORDER);
    return os;
}

int main() {
    using namespace std;
    BST<int> tree;

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
            }
        }
        catch (out_of_range& e) {}
        catch (exception& e) {}
    }

    return 0;
}
