#include <iostream>  
using namespace std;

class Time {  // Define the Time class
private:
    int hour;     // Private data member for hours
    int minute;   // Private data member for minutes
    int sec;      // Private data member for seconds

public:
    // Member function to set time values (input)
    void setTime() {
        cout << "Please enter hours, minutes, and seconds:" << endl;
        cin >> hour >> minute >> sec;
    }

    // Member function to display time values (output)
    void displayTime() {
        cout << "The time is: " << hour << ":" << minute << ":" << sec << endl;
    }
};

int main() {
    Time t1;  // Define an object of the Time class

    t1.setTime();     // Call the member function to input time
    t1.displayTime(); // Call the member function to display time

    return 0;
}
