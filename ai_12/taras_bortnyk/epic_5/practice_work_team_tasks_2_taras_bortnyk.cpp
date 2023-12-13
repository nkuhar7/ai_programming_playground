#include <iostream>
#include <fstream>
#include <string>

enum FileOpResult { Success, Failure };

FileOpResult file_operation(char *file_from, char *file_to, char *content = nullptr) {
    if (content == nullptr) {
        std::ifstream source(file_from);
        std::ofstream destination(file_to);

        if (!source.is_open() || !destination.is_open()) {
            return Failure;
        }

        std::string line;
        while (std::getline(source, line)) {
            destination << line << "\n";
        }

        source.close();
        destination.close();

        return Success;
    } else {
        std::ofstream file(file_from);

        if (!file.is_open()) {
            return Failure;
        }

        file << content;

        file.close();

        return Success;
    }
}

int main() {
    char file_from[] = "source.txt";
    char file_to[] = "destination.txt";
    char content[100];

    std::cout << "Enter text to write to the file: ";
    std::cin.getline(content, 100);
    FileOpResult result = file_operation(file_from, file_to, content);

    if (result == Success) {
        std::cout << "Data successfully written to the file!\n";
    } else {
        std::cout << "Failed to write data to the file or copy the content.\n";
    }

    result = file_operation("other_source.txt", "other_destination.txt");
    if (result == Success) {
        std::cout << "File successfully copied!\n";
    } else {
        std::cout << "Failed to copy the file.\n";
    }

    return 0;
}
