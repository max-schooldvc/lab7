// COMSC-210 | Lab 3A | Max Kechely
// IDE used: VSCode 

#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisine;
    int rating;  //like stars out of 5
    double averagePrice;
};

Restaurant restaurantInfo();
void showInfo(Restaurant r);

int main(){
    Restaurant restaurant1 = restaurantInfo();
    Restaurant restaurant2 = restaurantInfo();
    Restaurant restaurant3 = restaurantInfo();
    Restaurant restaurant4 = restaurantInfo();
    showInfo(restaurant1);
    showInfo(restaurant2);
    showInfo(restaurant3);
    showInfo(restaurant4);
    


    return 0;
}

Restaurant restaurantInfo() {
    Restaurant temp;
    cout << "Enter the restaurant name: ";
    getline(cin, temp.name);
    cout << "Enter the restaurant address: ";
    getline(cin, temp.address);
    cout << "Enter the type of cuisine: ";
    getline(cin, temp.cuisine);
    cout << "Enter the rating (out of 5): ";
    cin >> temp.rating;
    cout << "Enter the average price for a meal: ";
    cin >> temp.averagePrice;
    cout << endl;
    return temp;
}
void showInfo(Restaurant r) {
    cout << "Restaurant Name: " << r.name << endl;
    cout << "Address: " << r.address << endl;
    cout << "Cuisine Type: " << r.cuisine << endl;
    cout << "Rating (out of 5): " << r.rating << endl;
    cout << "Average Price for a Meal: $" << r.averagePrice << endl;
    cout << endl;
}