#include <iostream>
#include <iomanip> /* Input Output Manipulation
 Needed to fix whitespace problem. Makes it possible to adjust size of
the stream */
using namespace std;

void welcome_message()
{
    cout << "This program prints Hello, World n times.\n";
}

int number_of_prints()
{
    int n;
    cout << "Enter how many times Hello, World should be printed: ";
    cin >> setw(1) >> n; //Only one argument allowed

    //Checks if the user has made a correct imput.
    while (cin.good() == false) //Can also be written !cin.good()
    {
        //Clears the stream
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Incorrect input. Only numberals allowed. \n";
        cout << "Enter how many times Hello, World should be printed: ";
        cin >> setw(1) >> n; //Only one argument allowed
    }
    //Clears the stream
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    return n;
}

void print_hello_world(int number)
{
    if (number > 0)
    {
        int i = 0;
        do
        {
            cout << "Hello, World\n";
            i++;
        } while (i < number);
    }
}

int main()
{
    welcome_message();
    int number = number_of_prints();
    print_hello_world(number);
    cin.get();  /* This makes the program pause. A recommended alternative to
                System("pause"). */
    return 0;
}