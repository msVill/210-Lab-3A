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

Restaurant inputRestaurantInfo(); //prototype. Function #1
void outputRestaurantInfo(const Restaurant& res); //prototype. Function #2

int main() {
    // Restaurant myRestaurant = restaurantInfo(); // struct Restaurant object named myRestaurant.
    // Receives temp. struct created in Function #1.
    
    vector<Restaurant> restaurants;

    for(int i = 1; i < 4; i++) { // for-loop for struct obj. creation.
        Restaurant temp = inputRestaurantInfo(); // temp. object variable of type Restaurant receives method per loop.
        restaurants.push_back(temp); // using vector variable to receive the temp. struct objects created per loop.
    }

    cout << "\n--- Restaurant Info ---\n";
    outputRestaurantInfo(temp);
    // I thought I could use the temp. variable and pass it to the output function, but it does not accept it.

    return 0;
}

Restaurant intputRestaurantInfo() {

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