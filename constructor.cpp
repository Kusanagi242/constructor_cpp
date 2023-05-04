#include<iostream>
#include<windows.h>

using namespace std;
typedef class Bikecycle     // The class
{
    public:         // Access specificer
        string brand;
        int years;
        string series;
        void Hello();
        Bikecycle(string b, int y, string s) // This is a constructor with parameters
        {
            brand = b;
            years = y;
            series = s;
        };
}Bcc;
void Bikecycle::Hello()
{
    cout << "Hello Boss";
}

void newline()
{
    cout << "\n";
}

int main()
{
    // Create Bikecycle object and call the constructor with difference value
    // Default infor
    Bcc myBike("Hologram", 2023, "HLe1848"); 
    Bcc newBike("Tigerwood", 2050, "Twb43400");
    Bcc oldBike("Trinx", 1920, "b19434Tx");

    string accept = "n";
    cout << "Do you want to chage your information ? [Yes/No]: ";
    cin >> accept;
    while(accept == "y" | accept == "Y")
    {
        cout << "Now type your brand: "; cin >>  myBike.brand; 
        cout << "Type year      : "; cin >>  myBike.years;
        cout << "Type series    : "; cin >>  myBike.series; 
        newline();
        cout << "Hold on, wait a second !" << endl;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 20; j++)
            {
                cout << ".";
                Sleep(100);
            }
            // cout << "\n";
        }
        newline();
        Beep(568, 500);
        Sleep(800);
        cout << "Replacement f**king completed !!!" << endl;
        Sleep(500);
        cout << "Here is your new menu"<< endl << endl; 
        break;
    }
    cout << "\n";
    // print the value
    cout << "Your's Present bike name: " << myBike.brand 
            << endl << "Years: " << myBike.years 
            << endl << "Series: " << myBike.series << endl << endl;
    cout << "Your's New bike name   : " << newBike.brand 
            << endl << "Years: " << newBike.years 
            << endl << "Series: " << newBike.series << endl << endl;
    cout << "Your's Old bike name   : " << oldBike.brand 
            << endl << "Years: " << oldBike.years 
            << endl << "Series: " << oldBike.series << endl << endl;
    return 0;
}

/*
    A constructor in C++ is a special method that is automatically called
when an object of a class is created.
    To create a constructor -> use the same name of the class, followed by parentheses ().s
*/

