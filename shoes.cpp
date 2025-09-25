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
    
    Shoes(string a, string b, string c, string d, string e) {
    	n_brand = a;
    	n_size = b;
    	n_color = c;
    	n_price = d;
    	n_typesofShoes = e;
	}
    
    string brand;
    int size;
    string color;
    double price;
    string typesofShoes;
    
    Shoes(string f, int g, string h, double i, string j) {
    	brand = f;
    	size = g;
    	color = h;
    	price = i;
    	typesofShoes = j;
	}
    
};

int main() {
	Shoes shoesobj1("Vans", 11, "Black", 1200.05, "Running");
	
	Shoes shoesobj2("Adidas", 10, "Gray", 1100.54, "Walking"); 
	
	Shoes shoesobj("Brand: ", "Size: ", "Color: ", "Price: ", "Types of Shoe: ");
	
	cout << shoesobj.n_brand << shoesobj1.brand << endl;
	cout << shoesobj.n_size << shoesobj1.size << endl;
	cout << shoesobj.n_color << shoesobj1.color << endl;
	cout << shoesobj.n_price << shoesobj1.price << endl;
	cout << shoesobj.n_typesofShoes << shoesobj1.typesofShoes << endl << endl; 
	
	cout << shoesobj.n_brand << shoesobj2.brand << endl;
	cout << shoesobj.n_size << shoesobj2.size << endl;
	cout << shoesobj.n_color << shoesobj2.color << endl;
	cout << shoesobj.n_price << shoesobj2.price << endl;
	cout << shoesobj.n_typesofShoes << shoesobj2.typesofShoes << endl;

    return 0;
}