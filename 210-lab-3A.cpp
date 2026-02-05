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
    double closedHours;
    

};

Restaurant restaurantInfo(); //prototype. Function #1
void outputRestaurantInfo(const Restaurant& res); //prototype. Function #2

int main() {
    Restaurant myRestaurant = restaurantInfo(); // struct Restaurant object named myRestaurant.
    // Receives temp. struct created in Function #1.

    cout << "\n--- Restaurant Info ---\n";
    outputRestaurantInfo(myRestaurant);

    return 0;
}
Restaurant restaurantInfo() {

    Restaurant tempRestaurant; //this is the temprary struct

    cout << "Restaurant name: ";
    getline(cin, tempRestaurant.name); //using getline() to read whole string. X white spaces.

    cout << "Restaurant Address: ";
    getline(cin, tempRestaurant.address);

    cout << "Room Capacity: ";
    cin >> tempRestaurant.capacity; // using cin because it works with ints, etc. but not strings.

    cout << "Price: ";
    cin >> tempRestaurant.price;

    cout << "Opening Hour: ";
    cin >> tempRestaurant.openHours;

    cout << "Closing Hour: ";
    cin >> tempRestaurant.closedHours;

    return tempRestaurant;
}

void outputRestaurantInfo(const Restaurant& res) {
    cout << "Name: " << res.name << endl;
    cout << "Address: " << res.address << endl;
    cout << "Capacity: " << res.capacity;
    cout << "Price: " << res.price;
    cout << "Hours: " << res.openHours << " - " << res.closedHours << endl;
}