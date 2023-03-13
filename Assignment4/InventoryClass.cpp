#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory(){
    	itemNumber = 0;
    	quantity = 0;
    	cost = 0.0;
    	totalCost = 0.0;
    }
    Inventory(int item, int qty, double cst){
    	itemNumber = item;
    	quantity = qty;
    	cost = cst;
    	setTotalCost();
    }
    void setItemNumber(int item){
    		itemNumber = item;	
    }
    void setQuantity(int qty){
    		quantity = qty;
    		setTotalCost();
    }
    void setCost(double cst){
    		cost = cst;
    		setTotalCost();
    }
    void setTotalCost(){
    	totalCost = quantity * cost;
    }
    int getItemNumber(){
    	return itemNumber;
    }
    int getQuantity(){
    	return quantity;
    }
    double getCost(){
		return cost;
	}
	double getTotalCost(){
		return totalCost;
	}
};
int main(){
	Inventory item;
	int itemNumber;
    int quantity;
    double cost;
    double totalCost;
    
	cout << "Enter the Item Number: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Please enter a positive value for the Item Number: ";
		cin >> itemNumber;
	}
	cout << "Enter the Quantity of the item: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Please enter a positive value for the Quantity of the item: ";
		cin >> quantity;
	}
	cout << "Enter the Cost of the item: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Please enter a positive value for the Cost of the item: ";
		cin >> cost;
	}
	
	item.setItemNumber(itemNumber);
	item.setQuantity(quantity);
	item.setCost(cost);
	
	cout << "Item #" << item.getItemNumber() << endl
         << "Quantity: " << item.getQuantity() << endl
         << "Cost: $" << item.getCost() << endl
         << "Total cost: $" << item.getTotalCost() << endl << endl;
         
	return 0;
}

