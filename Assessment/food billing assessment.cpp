#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a class for FoodItem
class FoodItem {
public:
    string name;
    double price;

    FoodItem(string itemName, double itemPrice) {
        name = itemName;
        price = itemPrice;
    }
};

// Define a class for Order
class Order {
public:
    vector<FoodItem> items;

    void addItem(FoodItem item) {
        items.push_back(item);
    }

    double calculateTotal() {
        double total = 0.0;
        for (FoodItem item : items) {
            total += item.price;
        }
        return total;
    }
};

int main() {
    string customerName;
    cout << "                  ----------Tops Tech. Fast Food----------" << endl;
    cout << "\n ";
    cout << "Please enter your name: ";
    getline(cin, customerName);
    cout <<"hello "<<customerName;

    Order order;
    int mainChoice;
    int subChoice;
    int quantity;


    while (true) {
    	cout << "\n ";
    	cout << "\nWhat would you like to order?";
    	cout << "\n ";
        cout << "\n                    ----------MENU----------\n";
        cout << "\n ";
        cout << "1) Pizza\n";
        cout << "2) Burger\n";
        cout << "3) Sandwitch\n";
        cout << "4) Rolls\n";
        cout << "5) Biryani\n";
        cout << " \n";
        cout << " \n";
        cout << "Please Enter Your Choice: ";

        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                cout << "\nPizza Menu:\n";
                cout << "1. Margherita Pizza - Rs.200\n";
                cout << "2. Garden delight Pizza- Rs.250\n";
                cout << "3. Cheesy-7 Pizza- Rs.300\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        order.addItem(FoodItem("Margherita Pizza", 200 * quantity));
                        break;
                    case 2:
                        order.addItem(FoodItem("Garden delight Pizza", 250 * quantity));
                        break;
                    case 3:
                    	order.addItem(FoodItem("Cheesy-7 Pizza",  300 * quantity));
                        break;
					        
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
            case 2:
                cout << "\nBurger Menu:\n";
                cout << "1. Cheeseburger - Rs.120\n";
                cout << "2. Veggie Burger - Rs.180\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        order.addItem(FoodItem("Cheeseburger", 120 * quantity));
                        break;
                    case 2:
                        order.addItem(FoodItem("Veggie Burger", 180 * quantity));
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
            case 3:
                cout << "\nSandwitch Menu:\n";
                cout << "1. veg grill sandwitch - Rs.110\n";
                cout << "2. cheese grill sandwitch - Rs.130\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        order.addItem(FoodItem("veg grill sandwitch", 110 * quantity));
                        break;
                    case 2:
                        order.addItem(FoodItem("cheese grill sandwitch", 130 * quantity));
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
            case 4:
                cout << "\nRolls Menu:\n";
                cout << "1. Aloo chilly Roll - Rs.170\n";
                cout << "2. Veg Paneer Roll - Rs.230\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        order.addItem(FoodItem("Aloo chilly Roll", 170 * quantity));
                        break;
                    case 2:
                        order.addItem(FoodItem("Veg Paneer Roll", 230 * quantity));
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
            case 5:
                cout << "\nBiryani Menu:\n";
                cout << "1. veg Biryani - Rs.210\n";
                cout << "2. Paneer tika Biryani - Rs.270\n";
                cout << "Enter your choice: ";
                cin >> subChoice;
                cout << "Enter quantity: ";
                cin >> quantity;
                switch (subChoice) {
                    case 1:
                        order.addItem(FoodItem("veg Biryani", 210 * quantity));
                        break;
                    case 2:
                        order.addItem(FoodItem("Paneer tika Biryani", 270 * quantity));
                        break;
                    default:
                        cout << "Invalid choice. Please select a valid option.\n";
                        break;
                }
                break;
                
            case 0:
                cout << "\nThank you, " << customerName << "!\n";
                double total = order.calculateTotal();
                cout << "Your total bill is: Rs" << total << endl;
                cout << "your order will be delivered in 40 Minutes\n";
                cout << "Thank you for odering from Tops Tech Fast Food\n";
                                
                return 0;
            
        }
    }

    return 0;
}
