#include <iostream>
using namespace std;

int main() {
    string name, gender;
    int age;
    long long phone;
    float ticketPrice = 1200;
    float finalPrice;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your gender (Male/Female): ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your phone number: ";
    cin >> phone;

    if (gender == "Female" || gender == "female") {
        if (age <= 12) {
            finalPrice = ticketPrice - (ticketPrice * 0.05);
        } else {
            finalPrice = ticketPrice - (ticketPrice * 0.03);
        }
    } else if (gender == "Male" || gender == "male") {
        finalPrice = ticketPrice + (ticketPrice * 0.18);
    } else {
        finalPrice = ticketPrice;
    }

    cout << "\n----- Ticket Summary -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Age: " << age << endl;
    cout << "Phone: " << phone << endl;
    cout << "Final Ticket Price: Rs. " << finalPrice << endl;

    return 0;
}
