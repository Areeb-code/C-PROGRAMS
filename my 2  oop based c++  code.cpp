#include <iostream>
#include <algorithm> // For transform function
#include <cctype> // For toupper function
#include <limits> // For numeric_limits
using namespace std;

class Car {
public:
    string name;
    string comp_name; // company name
    string price;
    string max_speed;
    string lat_model; // latest model
};

int main() {
    string n;

    // CIVIC variable for another car
    Car c1;
    c1.comp_name = "HONDA";
    c1.price = "86.6-90 lac";
    c1.max_speed = "169 mph";
    c1.lat_model = "2024";

    // WAGON R variable for another car
    Car c2;
    c2.comp_name = "SUZUKI";
    c2.price = "32,1400 ~(32 lac)";
    c2.max_speed = "180 KM/H";
    c2.lat_model = "2022";

    // CITY variable for another car
    Car c3;
    c3.comp_name = "HONDA";
    c3.price = "Rs. 11.82 lakh to 16.35 lakh";
    c3.max_speed = "180 KM/H";
    c3.lat_model = "2023";

    // COROLLA variable for another car
    Car c4;
    c4.comp_name = "TOYOTA";
    c4.price = "$22,175 - $27,890";
    c4.max_speed = "117 mph";
    c4.lat_model = "2025";

    // gets car name
    cout << "Enter car name (IN BLOCK LETTERS OR CAPS): ";
    cin.ignore(numeric_limits<streamsize>::max(),"/n"); // Ensure only newline characters are ignored
    getline(cin, n);

    // Convert user input to uppercase
    transform(n.begin(), n.end(), n.begin(), ::toupper);

    // Debug statement to check the input after conversion
    cout << "Converted input: " << n << endl;

    // decides what car's information to show
    if (n == "HONDA CIVIC" || n == "CIVIC") {
        cout << "PRICE: " << c1.price << endl;
        cout << "COMPANY NAME: " << c1.comp_name << endl;
        cout << "MAXIMUM SPEED: " << c1.max_speed << endl;
        cout << "LATEST MODEL: " << c1.lat_model << endl;
    } else if (n == "SUZUKI WAGON R" || n == "WAGON R") {
        cout << "PRICE: " << c2.price << endl;
        cout << "COMPANY NAME: " << c2.comp_name << endl;
        cout << "MAXIMUM SPEED: " << c2.max_speed << endl;
        cout << "LATEST MODEL: " << c2.lat_model << endl;
    } else if (n == "HONDA CITY" || n == "CITY") {
        cout << "PRICE: " << c3.price << endl;
        cout << "COMPANY NAME: " << c3.comp_name << endl;
        cout << "MAXIMUM SPEED: " << c3.max_speed << endl;
        cout << "LATEST MODEL: " << c3.lat_model << endl;
    } else if (n == "TOYOTA COROLLA" || n == "COROLLA") {
        cout << "PRICE: " << c4.price << endl;
        cout << "COMPANY NAME: " << c4.comp_name << endl;
        cout << "MAXIMUM SPEED: " << c4.max_speed << endl;
        cout << "LATEST MODEL: " << c4.lat_model << endl;
    } else {
        cout << "Invalid car name" << endl;
    }

    return 0;
}


