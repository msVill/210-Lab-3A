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
    
    string name;
    int address;
    double price;
    double openhours;
    double closedHours;

};

void restaurantInfo(const Restaurant& tempRest){
    cout << "Enter the Restaurant name:" << tempRest.name << "\n";
    cout << "Enter the address:" << tempRest.address << "\n";
    cout << "Enter Open Hours:" << tempRest.openhours << "\n";
    cout << "Enter Closed Hours:" << tempRest.closedHours << "\n";
    cout << "Enter price of meal:" << tempRest.price << endl;

}

void 

int main(){

    return 0;
};