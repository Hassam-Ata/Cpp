
    int empid;
    float salary;
    Address address;
};

int main()
{
    Employee employee;
    cout << "Enter Employee Id: ";
    cin >> employee.empid;

    cout << "Enter Employee Name: ";
    cin >> employee.name;
    cout << "Enter Employee Salary: ";
    cin >> employee.salary;

    cout << "Enter Employee House No: ";
    cin >> employee.address.house_no;
    cout << "Enter Employee City: ";
    cin >> employee.address.city;
    cout << "Enter Employee Pin Code: ";
    cin >> employee.address.pin_code;
    if (employee.salary < 5000)
    {
        employee.salary += 2000;
        cout << endl;
        cout << "Salary increased by 2000" << endl;
    }
    cout << endl;
    cout << "Details of Employees" << endl;
    cout << endl;
    cout << "Employee Id : " << employee.empid << endl;
    cout << "Employee Name : " << employee.name << endl;
    cout << "Employee Salary : " << employee.salary << endl;
    cout << "Employee House No : " << employee.address.house_no << endl;
    cout << "Employee City :" << employee.address.city << endl;
    cout << "Employee Pin Code : " << employee.address.pin_code << endl;

    return 0;
}