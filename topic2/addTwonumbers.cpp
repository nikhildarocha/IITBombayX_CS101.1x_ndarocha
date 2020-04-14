#include<iostream>

using namespace std;

int addTwoInts(int a, int b){
    return a + b;
}

int main () {

    int A, B, C;
    cout << "Enter two numbers\n";
    cin >> A >> B;
    C = addTwoInts(A,B);
    cout << "Sum is: " << C;
    return 0;
}