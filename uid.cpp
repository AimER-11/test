#include <iostream>
using namespace std;

// Function
int add(int a, int b) {
    return a + b;
}

// Class
class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {

    // Variables
    int a, b;

    // Input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Function call
    cout << "Sum = " << add(a, b) << endl;

    // If-else
    if (a > b) {
        cout << a << " is greater." << endl;
    } else if (b > a) {
        cout << b << " is greater." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    // For loop
    cout << "Numbers from 1 to 5:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    cout << endl;

    // Array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Object
    Student student;
    student.name = "Rahul";
    student.age = 20;

    cout << "\nStudent Details:" << endl;
    student.display();

    return 0;
}