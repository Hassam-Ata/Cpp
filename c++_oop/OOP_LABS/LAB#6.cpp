#include <iostream>
using namespace std;
#include <string>

const int MAX_PATIENTS = 100;


class IndoorPatient {
protected:
    string name;
    string dateOfAdmission;
    string disease;
    string dateOfDischarge;

public:
    void enterInformation() {
        cout << "Enter the name of the patient: ";
        cin >> name;
        cout << "Enter the date of admission: ";
        cin >> dateOfAdmission;
        cout << "Enter the disease: ";
        cin >> disease;
        cout << "Enter the date of discharge: ";
        cin >> dateOfDischarge;
    }

    void displayPatients() const {
        cout << "Patient Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Admission: " << dateOfAdmission << endl;
        cout << "Disease: " << disease << endl;
        cout << "Date of Discharge: " << dateOfDischarge << endl;
    }
};


class IndoorPatientWithAge : public IndoorPatient {
private:
    int age;

public:
    void enterInformation() {
        IndoorPatient::enterInformation();
        cout << "Enter the age of the patient: ";
        cin >> age;
    }

    void displayPatientsWithAge() const {
        IndoorPatient::displayPatients();
        cout << "Age: " << age << endl;
    }
};

int main() {
    int numPatients;
    cout << "Enter the number of patients: ";
    cin >> numPatients;

    if (numPatients > MAX_PATIENTS) {
        cout << "Maximum number of patients exceeded." << endl;
        return 0;
    }

    IndoorPatientWithAge patients[MAX_PATIENTS];

    for (int i = 0; i < numPatients; i++) {
    cout << "Enter information for patient " << i + 1 << ":" << endl;
        patients[i].enterInformation();
    }

    cout << "\n--- Patient Information ---" << endl;
    for (int i = 0; i < numPatients; i++) {
        cout << "\nPatient " << i + 1 << ":" << endl;
        patients[i].displayPatientsWithAge();
    }

    return 0;
}
