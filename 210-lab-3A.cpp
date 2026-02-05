// prog. needs to manipulate data about restaurants - use struct vars.
// needs 5 attributes/data members.
// Function 1 - creates a temp. struct - gets input from user(? - confirmed) - returns struct to main().
// MILESTONE 1: function works - code compiles - creates 1 restaurant struct obj. for testing.
// Function 2 - gets struct obj . as formal parameter - outputs the data - (return type: void).
// Testing: create min. 4 struct objs. - use functions's to manipulate data.
// MILESTONE 2: completed program w/the two working funcitons.

#include <iostream>
#include <string>

using namespace std;

struct Restaurant {
    
    string name, address;
    int capacity;
    float price;
    float openHours;
    float closedHours;
    

};

Restaurant restaurantInfo(); //prototype.
void outputRestaurant(const Restaurant& res); //prototype.

int main() {
    
    // Restaurant r = {"Pear Bistro", "2200 Pear St.", 40, 10.00, 7.00, 20.00};
    // cout << "Name: " << r.name << endl;
    // cout << "Address: " << r.address << endl;
    // cout << "Room Capacity: " << r.capacity << endl;
    // cout << "Lowest Price: " << r.price << endl;
    // cout << "Hours of Operation: " << r.openHours << " - " << r.closedHours << endl;
    // return 0;
}

Restaurant restaurantInfo(){
    Restaurant tempRestaurant; //this is the temprary struct
    cout << "Restaurant name: ";
    getline(cin, tempRestaurant.name);
    cout << "Restaurant Address: ";
    getline(cin, tempRestaurant.address);
    cout << "Room Capacity: ";
    cin >> tempRestaurant.capacity;
    cin.ignore();
    cout << "Price: ";
    cin >> tempRestaurant.price;
    cin.ignore();
    cout << "Opening Hour: ";
    cin >> tempRestaurant.openHours;
    cout << "Closing Hour: ";
    cin >> tempRestaurant.closedHours;
    return tempRestaurant;

}