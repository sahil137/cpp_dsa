#include<iostream>
#include<string.h>
using namespace std;

// Product Shopping website

class Product{
    int id;
    // char name[100];
    // name will point to a dynamic array
    char *name;
    int mrp;
    int selling_price;
public:
    Product(){
        cout << "Inside Contructor" <<endl;
    }
    Product(int id, char *n, int mrp, int selling_price) {
        this -> id = id;
        this -> mrp = mrp;
        this -> selling_price = selling_price;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Pass by refrence
    Product (Product &X) {
        // Code to create the copy
        id = X.id;
        // deep copy by dynamically allocating memory 
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;

    }
    // Setters
    void setMrp(int price) {
        mrp = price;
    }

    void setSellingPrice(int price) {
        if (price>mrp) {
            selling_price = mrp;
        } else  {
            selling_price = price;
        }
    }

    int getMrp() {
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }

    void showDetails() {
        cout << "Name : " << name <<endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price " << selling_price << endl;
        cout << "MRP : " << mrp << endl;
    }

    void setName(char *name) {
        strcpy(this->name, name);
    }

};

int main() {

    Product camera(101, "Sony", 10000, 8000);

    // Copy is made using a special constructor called -> Copy Constructor
    Product webcam(camera);
    camera.showDetails(); 
    webcam.showDetails();
    // camera.setMrp(100);
    // camera.setSellingPrice(200);
    cout << camera.getMrp() <<endl;
    cout << camera.getSellingPrice() <<endl;
    
}