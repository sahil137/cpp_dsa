#include<iostream>
#include<string.h>
using namespace std;

// Product Shopping website

class Product{
    int id;
    char name[100];
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
        strcpy(name, n);
        
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

};

int main() {

    Product camera(101, "Sony", 10000, 8000);
    // camera.setMrp(100);
    // camera.setSellingPrice(200);
    cout << camera.getMrp() <<endl;
    cout << camera.getSellingPrice() <<endl;
    
}