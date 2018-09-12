#include <iostream>

using namespace std;

int main()
{
    char choice;
    int a = 0;
    int counter = 0;
    int counter2 = 0;
    
    cout << "Hello Welcome to Ryan's Farms!" << "\n" << "We have a great selection for you today! \n";
    while (a <= 6){
        cout << "Would you like to try to pick an apple";
        for (counter = 0 ; counter < counter2 ; counter++) cout << " again"; 
        cout << "?" << "\n"; 
        cin >> choice;
        if (choice == 'y') { a++; counter2 = 1; cout << "Great you have " << a << " apples! \n";
        }
        else if (choice == 'n'){cout <<"Nice Call saving the tree \n"; break;}
    }
    if (a >= 7){
        cout << "You are really greaty taking " << a << " apples. \n";
        cout << "*Takes 6 apples away* \n";
        cout << "I leave you with 1 apple because I am Nice \n";
        a = -1;
        
    }
    if (a <= 6){
        cout << "Thanks for visiting the farm! \n";
    }
    
    if (a = -1){
        a = 1;
    }
    cout << "You are leaving with " << a << " apples. \n";

    return 0;
}
