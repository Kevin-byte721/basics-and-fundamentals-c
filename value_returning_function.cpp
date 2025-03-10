#include <iostream>
using namespace std;

void display(string name, int age, bool isMarried) {
    cout << "Hello World " << name << endl; 
    cout << "Age " << age << endl;
    cout << "Is Married? " << isMarried << endl; 
}

// value returning function
// string, int, double, bool

string fullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

double calculateAreaofTriangle(double base, double height) {
    double area = (base * height) /2;
    return area;
}

int main() {
    cout << fullName("John", "Doe") << endl;
    cout << calculateAreaofTriangle(20, 2);
    return 0;
}