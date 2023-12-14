#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Person {
    char lastName[50];
    char firstName[50];
    char patronymic[50];
    char address[100];
    char phoneNumber[15];
    int age;
};

void printBinaryFileContents(const char* filename) {
    ifstream inFile(filename, ios::binary);

    if (!inFile.is_open()) {
        cerr << "Unable to open file: " << filename << endl;
        return;
    }

    Person person;
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        cout << "Last Name: " << person.lastName << "\n";
        cout << "First Name: " << person.firstName << "\n";
        cout << "Patronymic: " << person.patronymic << "\n";
        cout << "Address: " << person.address << "\n";
        cout << "Phone Number: " << person.phoneNumber << "\n";
        cout << "Age: " << person.age << "\n\n";
    }

    inFile.close();
}

void deleteByAge(const char* filename, int ageToDelete) {
    ifstream inFile(filename, ios::binary);
    ofstream outFile("temp.bin", ios::binary);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Unable to open file for deletion." << endl;
        return;
    }

    Person person;
    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        if (person.age != ageToDelete) {
            outFile.write(reinterpret_cast<char*>(&person), sizeof(person));
        }
    }

    inFile.close();
    outFile.close();

    remove(filename);
    rename("temp.bin", filename);

    cout << "Persons with age " << ageToDelete << " removed successfully.\n";
}

void addAfterIndex(const char* filename, int index, const Person& newPerson) {
    ifstream inFile(filename, ios::binary);
    ofstream outFile("temp.bin", ios::binary);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Unable to open file for addition." << endl;
        return;
    }

    Person person;
    int currentIndex = 0;

    while (inFile.read(reinterpret_cast<char*>(&person), sizeof(person))) {
        outFile.write(reinterpret_cast<char*>(&person), sizeof(person));

        if (currentIndex == index) {
            outFile.write(reinterpret_cast<const char*>(&newPerson), sizeof(newPerson));
        }

        currentIndex++;
    }

    inFile.close();
    outFile.close();

    remove(filename);
    rename("temp.bin", filename);

    cout << "Person added after index " << index << " successfully.\n";
}

void fillFile(const char* filename, int count) {
    Person person;
    ofstream file(filename, ios::binary);

    if (!file.is_open()) {
        cerr << "Error opening file for writing: " << filename << endl;
        return;
    }

    for (int i = 0; i < count; ++i) {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        cout << "Last Name: ";
        cin.getline(person.lastName, sizeof(person.lastName));

        cout << "First Name: ";
        cin.getline(person.firstName, sizeof(person.firstName));

        cout << "Patronymic: ";
        cin.getline(person.patronymic, sizeof(person.patronymic));

        cout << "Address: ";
        cin.getline(person.address, sizeof(person.address));

        cout << "Phone Number: ";
        cin.getline(person.phoneNumber, sizeof(person.phoneNumber));

        cout << "Age: ";
        cin >> person.age;

        cin.ignore(); // Clear the newline character from the buffer

        file.write(reinterpret_cast<const char*>(&person), sizeof(person));
    }

    file.close();
}

int main() {
    const char* filename = "people_data.bin";
    int count = 3; // You can change this to the desired number of initial records

    fillFile(filename, count);

    cout << "\nInitial file contents:\n";
    printBinaryFileContents(filename);

    int ageToDelete;
    cout << "\nEnter the age to remove: ";
    cin >> ageToDelete;
    deleteByAge(filename, ageToDelete);

    cout << "\nFile contents after removal:\n";
    printBinaryFileContents(filename);

    int insertIndex;
    cout << "\nEnter the index to insert after: ";
    cin >> insertIndex;
    cin.ignore(); // Clear the newline character from the buffer

    Person newPerson;
    cout << "\nEnter details for the new person:\n";
    cout << "Last Name: ";
    cin.getline(newPerson.lastName, sizeof(newPerson.lastName));

    cout << "First Name: ";
    cin.getline(newPerson.firstName, sizeof(newPerson.firstName));

    cout << "Patronymic: ";
    cin.getline(newPerson.patronymic, sizeof(newPerson.patronymic));

    cout << "Address: ";
    cin.getline(newPerson.address, sizeof(newPerson.address));

    cout << "Phone Number: ";
    cin.getline(newPerson.phoneNumber, sizeof(newPerson.phoneNumber));

    cout << "Age: ";
    cin >> newPerson.age;

    addAfterIndex(filename, insertIndex, newPerson);

    cout << "\nFile contents after addition:\n";
    printBinaryFileContents(filename);

    return 0;
}