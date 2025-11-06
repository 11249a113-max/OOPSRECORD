#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    string designation;
    double basicSalary;
    double hra;   
    double da;    
    double tax;
    double grossSalary;
    double netSalary;

public:
    
    void getData() {
        cout << "\nEnter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    
    void calculateSalary() {
        hra = 0.20 * basicSalary;   
        da  = 0.10 * basicSalary;  
        grossSalary = basicSalary + hra + da;
        tax = 0.05 * grossSalary;   
        netSalary = grossSalary - tax;
    }

    
    void displayPayroll() {
        cout << fixed << setprecision(2);
        cout << "\n--------------------------------------";
        cout << "\n        Employee Payroll Report       ";
        cout << "\n--------------------------------------";
        cout << "\nEmployee ID: " << empID;
        cout << "\nName: " << name;
        cout << "\nDesignation: " << designation;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nHRA (20%): " << hra;
        cout << "\nDA (10%): " << da;
        cout << "\nGross Salary: " << grossSalary;
        cout << "\nTax (5%): " << tax;
        cout << "\nNet Salary: " << netSalary;
        cout << "\n--------------------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":";
        emp[i].getData();
        emp[i].calculateSalary();
    }

    cout << "\n\n=========== PAYROLL REPORT ===========\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayPayroll();
    }

    return 0;
}