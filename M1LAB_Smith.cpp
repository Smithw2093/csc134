/*
CSC 134
M1LAB - Apple Sales
B SMith 
1/22/24
*/
#include <iostream>
using namespace std;

int main () {
    // Apple sales program;
    string name = "Brent";
    int num_apples = 100;
    double price_per_apple = .25;

    // calculate price for all the apples
    double total_price = num_apples * price_per_apple;

    //TODO
    cout << "Wlecome to the " << name << " Apple Farm." << endl; 
    cout << "We have " << num_apples << " apples." << endl;
    cout << "Each one costs $" << price_per_apple << endl;
    cout << "For a total cost of $" << total_price << endl;
    cout << endl;

    return 0;
}