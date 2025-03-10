#include <iostream>
#include <string>
using namespace std;

class Shoes {
    public: 
    string n_brand;
    string n_size;
	string n_color;
    string n_price;
    string n_typesofShoes;
    
    string brand;
    int size;
    string color;
    double price;
    string typesofShoes;
    
};

int main() {
    Shoes shoesobj1;
    shoesobj1.brand = "Nike" ;
    shoesobj1.size = 11;
    shoesobj1.color = "Black" ;
    shoesobj1.price = 1200.05;
    shoesobj1.typesofShoes = "Running";

    shoesobj1.n_brand = "Brand: " ;
    shoesobj1.n_size = "Size: ";
    shoesobj1.n_color = "Color: " ;
    shoesobj1.n_price = "Price: ";
    shoesobj1.n_typesofShoes = "Type of Shoes: ";

    Shoes shoesobj2;
    shoesobj2.brand = "Adidas";
    shoesobj2.size = 10;
    shoesobj2.color = "Gray";
    shoesobj2.price = 1100.54;
    shoesobj2.typesofShoes = "Walking";

	shoesobj2.n_brand = "Brand: " ;
    shoesobj2.n_size = "Size: ";
    shoesobj2.n_color = "Color: " ;
    shoesobj2.n_price = "Price: ";
    shoesobj2.n_typesofShoes = "Type of Shoes: ";
    
	cout << shoesobj1.n_brand << shoesobj1.brand << endl;
	cout << shoesobj1.n_size << shoesobj1.size << endl;
	cout << shoesobj1.n_color << shoesobj1.color << endl;
	cout << shoesobj1.n_price << shoesobj1.price << endl;
	cout << shoesobj1.n_typesofShoes << shoesobj1.typesofShoes << endl << endl; 
	
	cout << shoesobj2.n_brand << shoesobj2.brand << endl;
	cout << shoesobj2.n_size << shoesobj2.size << endl;
	cout << shoesobj2.n_color << shoesobj2.color << endl;
	cout << shoesobj2.n_price << shoesobj2.price << endl;
	cout << shoesobj2.n_typesofShoes << shoesobj2.typesofShoes << endl;

    return 0;
}