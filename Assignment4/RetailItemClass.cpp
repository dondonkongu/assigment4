#include <iostream>
using namespace std;


class RetailItem{
    public:
    string description;
    int unitsOnHand;
    double price;
    RetailItem(){};
    RetailItem(string Des,int Unit,double Price){
        description=Des;
        unitsOnHand=Unit;
        price=Price;
    }
    void display(){
		cout<<"\t"<<description<<"\t"<<unitsOnHand<<"\t\t"<<price<<endl;
    }
};
int main(){
    RetailItem r1("jacket Don ",12,59.95);
    RetailItem r2("Designer Jeans ",40,34.95);
    RetailItem r3("Shirt Hoan",20,24.95);
    cout<<"-----------------------------------------------"<<endl;
	cout<<" \tDescription \tUnits On Hand \tPrice"<<endl;
	cout<<"-----------------------------------------------"<<endl;
    r1.display();
    r2.display();
    r3.display();

}