#include <iostream>
#include <map>
#include <string>
using namespace std;

// Function to display all student names and grades stored in the map
void displayStudents(const std::map<std::string, int>& students) {
    cout << "Student List:" << std::endl;
    for (const auto& pair : students) {
        cout << "Name: " << pair.first << ", Grade: " << pair.second << endl;
    }
}

int main() {
    map<std::string, int> students;

    char choice;
    do {
        string name;
        int grade;

        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter grade for " << name << ": ";
        cin >> grade;

        // Insert or update student data in the map
        students[name] = grade;

        cout << "Do you want to enter another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Display the student list
    displayStudents(students);

    // Retrieval function
    string searchName;
    cout << "Enter student name to get the grade: ";
    cin >> searchName;

    auto it = students.find(searchName);
    if (it != students.end()) {
        cout << "Grade of " << searchName << " is: " << it->second <<endl;
    } else {
        cout << "Student not found in the list." << endl;
    }

    // Update function
    cout << "Enter the name of the student whose grade you want to update: ";
    cin >> searchName;

    it = students.find(searchName);
    if (it != students.end()) {
        int newGrade;
        cout << "Enter new grade for " << searchName << ": ";
        cin >> newGrade;
        it->second = newGrade;
        cout << "Grade updated successfully." << endl;
    } else {
        cout << "Student not found in the list." << endl;
    }
    // Deletion function
    cout << "Enter the name of the student you want to delete: ";
    cin >> searchName;

    int removedCount = students.erase(searchName);
    if (removedCount == 1) {
        cout << searchName << " and their grade have been removed from the list." << endl;
    } else {
        cout << "Student not found in the list." << endl;
    }
    // Display the updated student list
    displayStudents(students);

    return 0;
}

























