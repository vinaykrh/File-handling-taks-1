#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeFile(const string& filename) {
    ofstream file(filename); 
    if (!file) {
        cout << "Cannot open file." << endl;
        return;
    }

    string data;
    cout << "Enter data to write:" << endl;
    cin.ignore(); 
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "File written successfully." << endl;
}

void appendFile(const string& filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Cannot open file." << endl;
        return;
    }

    string data;
    cout << "Enter data to append:" << endl;
    cin.ignore(); 
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data appended successfully." << endl;
}

void readFile(const string& filename) {
    ifstream file(filename); 
    if (!file) {
        cout << "File not found." << endl;
        return;
    }

    string line;
    cout << "\n--- File Content ---" << endl;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    string filename;
    int choice;

    cout << "Enter file name: ";
    cin >> filename;

    while (true) {
        cout << "\n1. Write\n2. Append\n3. Read\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: writeFile(filename); break;
            case 2: appendFile(filename); break;
            case 3: readFile(filename); break;
            case 4: return 0;
            default: cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
