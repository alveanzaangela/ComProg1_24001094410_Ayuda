#include <iostream>
#include <string>

using namespace std;

int main() {
    string visitorName;
    int month;
    int year;
    int day;
    int leapYear=year%4;
    
    cout << "Hello, I am Angela!! Welcome to my first C++ application.\n";
    
    cout << "Hey! What is your name: ";
    cin >> visitorName;
    
    cout << "Good day " << visitorName << " it's nice to meet you! \n";
    
    cout << "When is your birthday?\n ";
    
    cout << "month:";
    cin >> month;
    
    cout << "year: ";
    cin >> year;
    
    cout << "day:";
    cin >> day;
    
    cout << "value of leapYear" << leapYear;
    
    if (leapYear == 1)
    cout << "\nNice your year is a leapyear"
    
    



    return 0;
}
