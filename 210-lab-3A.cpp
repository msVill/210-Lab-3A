// prog. needs to manipulate data about restaurants - use struct vars.
// needs 5 attributes/data members.
// Function 1 - creates a temp. struct - gets input from user(? - confirmed) - returns struct to main().
// MILESTONE 1: function works - code compiles - creates 1 restaurant struct obj. for testing.
// Function 2 - gets struct obj . as formal parameter - outputs the data - (return type: void).
// Testing: create min. 4 struct objs. - use functions's to manipulate data.
// MILESTONE 2: completed program w/the two working funcitons.

#include <iostream>

using namespace std;

struct Restaurant {
    
    string name, address;
    int capacity;
    double price, openHours, closedHours;
    

};

int main() {
    Restaurant restaurantInfo = {"Pear Bistro", "22 Pear Street", 60, 13.00, 7.00, 20.00};
    return 0;
    cout << "Restaurant Information: " << restaurantInfo << endl;
    return 0;
}

