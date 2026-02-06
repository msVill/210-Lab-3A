// Testing: create min. 4 struct objs. - use functions's to manipulate data.
// Have to use Vectors
// MILESTONE 2: completed program w/the two working funcitons.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Restaurant {
    string name, address;
    int capacity;
    float price;
    float openHours;
    float closedHours;
};

Restaurant restaurantInfo(); //prototype. Function #1
void outputRestaurantInfo(const Restaurant& res); //prototype. Function #2

int main() {
    Restaurant myRestaurant = restaurantInfo(); // struct Restaurant object named myRestaurant.
    // Receives temp. struct created in Function #1.
    
    Restaurant myRestaurant2 = restaurantInfo();
   
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
    cout << "Capacity: " << res.capacity << endl;

    cout << fixed << setprecision(2); 
    cout << "Price: $ " << res.price << endl;
    cout << "Hours: " << res.openHours << " - " << res.closedHours << endl;
    cout << endl;
}