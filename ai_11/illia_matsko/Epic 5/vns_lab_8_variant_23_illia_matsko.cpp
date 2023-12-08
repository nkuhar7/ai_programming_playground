#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Stadium {
    string name;
    int yearBuilt;
    int numOfFields;
    string sports;
};

void printStadiums(const vector<Stadium>& stadiums) {
    for (const Stadium& stadium : stadiums) {
        cout << "Name: " << stadium.name << "\tYear Built: " << stadium.yearBuilt << "\tNumber of Fields: " << stadium.numOfFields << "\tSports: " << stadium.sports << endl;
    }
}

void destroyStadiums(vector<Stadium>& stadiums, int year) {
    stadiums.erase(remove_if(stadiums.begin(), stadiums.end(), [year](const Stadium& s) {
        return s.yearBuilt < year;
    }), stadiums.end());
}

void addStadiums(vector<Stadium>& stadiums, int targetIndex) {
    if (targetIndex >= 2 && targetIndex < stadiums.size()) {
        Stadium newStadium1 = {"NEW STADIUM 1", 2022, 1, "Handball"};
        Stadium newStadium2 = {"NEW STADIUM 2", 2022, 1, "Volleyball"};

        stadiums.insert(stadiums.begin() + targetIndex-2, {newStadium1, newStadium2});
    } else {
        cerr << "Invalid target index for adding stadiums." << endl;
    }
}

int main() {
    ofstream file1("stadiums.bin", ios::binary);
    if (!file1.is_open()) {
        cerr << "Error opening file1 for writing." << endl;
        return 1;
    }

    vector<Stadium> stadiums = {
            {"Stadium A", 2000, 1, "Football"},
            {"Stadium B", 2005, 2, "Soccer"},
            {"Stadium C", 2010, 1, "Basketball"},
            {"Stadium D", 2015, 3, "Baseball"},
            {"Stadium E", 2020, 1, "Football"},
            {"Stadium F", 2025, 2, "Soccer"},
            {"Stadium G", 2030, 1, "Basketball"},
            {"Stadium H", 2035, 3, "Baseball"}
    };

    file1.write(reinterpret_cast<char*>(stadiums.data()), sizeof(Stadium) * stadiums.size());
    file1.close();

    ifstream file2("stadiums.bin", ios::binary);
    if (!file2.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "Stadiums:" << endl;
    printStadiums(stadiums);

    int targetYear;
    cout << "\nEnter target year: ";
    cin >> targetYear;
    destroyStadiums(stadiums, targetYear);
    cout << "\nAfter destroying stadiums built before " << targetYear << ":" << endl;
    printStadiums(stadiums);

    int targetIndex;
    cout << "\nEnter target index: ";
    cin >> targetIndex;
    addStadiums(stadiums, targetIndex);
    cout << "\nAfter adding new stadiums before index " << targetIndex << ":" << endl;
    printStadiums(stadiums);

    file2.close();

    return 0;
}
