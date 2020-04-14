#include<iostream>

using  namespace std;

int main() {

    int NBOYS=35, NGIRLS=124, NSTUDENTS=80;

    cout << "Enter the number of boys";
    cin >> NBOYS;

    cout << "Enter the number of girls";
    cin >> NGIRLS;

    NSTUDENTS = NBOYS + NGIRLS;
    cout << "The total number of students is\n";
    cout << NSTUDENTS;
    return 0;

}