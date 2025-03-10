#include <iostream>
using namespace std;

void display(string name, int age, bool isMarried) {
    string married = (isMarried ? "yes" : "no");
    cout << "Hello World " << name << endl;
    cout << "Age " << age << endl;
    cout << "Is Married? " << married << endl;
}

string fullName(string firstName, string lastName) {
    return firstName + " " + lastName;
}

string ageIndentifier(int age) {
    string status = (age >= 18 && age < 60 ? "Gen-Z" : "Senior") ;
    return status;
}

double calculateAreaofTriangle(double base, double height) {
    double area = (base * height) / 2;
    return area;
}
class AreaCalculator{
    public:
    double areaOfTriangle(double base, double height) {
        double area = (base * height)/2;
        return area;
    }
};

int main() {
    display("John", 30, true);
    cout << endl;
    cout << calculateAreaofTriangle(20, 2) << endl;
    cout << endl << ageIndentifier(60) << endl;
    AreaCalculator area;
    cout << area.areaOfTriangle(10,2);
    return 0;
}