// PROGRAM: Program3_Wages
// Written by Ryan Jacobs
// 11.1.2021
// 
// Program will display the hourly wages of five students.

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    // displays wages of five students
    
    cout << setiosflags(ios::right | ios::fixed | ios::showpoint);
    cout << "Employee" << setw(2) << "  " << setw(10) << "Hourly Wage" << endl;
    cout << endl;
    cout << 1 << setw(10) << "  " << setw(3) << "$ " << setprecision(2) << 12.65 << endl;
    cout << 2 << setw(10) << "  " << setw(3) << "$ " << setprecision(2) << 15.10 << endl;
    cout << 3 << setw(10) << "  " << setw(3) << "$ " << setprecision(2) << 13.89 << endl;
    cout << 4 << setw(10) << "  " << setw(4) << "$ " << setprecision(2) << 9.00 << endl;
    cout << 5 << setw(10) << "  " << setw(4) << "$ " << setprecision(2) << 9.50 << endl;
    

    return 0;
}


