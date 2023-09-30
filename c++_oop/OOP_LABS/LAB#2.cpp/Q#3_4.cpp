#include <iostream>
using namespace std;
struct student_record
{
    char first_name[20];
    char last_name[20];
    float score;
};

void display(char first_name[], char last_name[], float score)
{
    cout << "Your first name is: " << first_name << endl;
    cout << "Your last name is: " << last_name << endl;
    cout << "Your score is: " << score << endl;
}

int main()

{
    student_record student;
    cout << "Enter your first name: ";
    cin >> student.first_name;
    cout << "Enter your last name: ";
    cin >> student.last_name;
    cout << "Enter your score: ";
    cin >> student.score;
    display(student.first_name, student.last_name, student.score);

    return 0;
}