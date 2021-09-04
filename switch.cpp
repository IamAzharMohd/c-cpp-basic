#include <iostream>
#include <cmath>
using namespace std;

double myArea(double x, double y)
{
    return x * y;
}

double myMultiply(double numOne, double numTwo)
{
    return numOne * numTwo;
}

double myDivision(double numOne, double numTwo)
{
    return numOne / numTwo;
}

string myConcat(string s, string t)
{
    return s + " " + t;
}

int main()
{
    int userChoice;
    string sOne, sTwo;
    double numOne, numTwo;
    cout << "Choose your program:\n";
    cout << "1. Area of a rectangle\n";
    cout << "2. Multiplication\n";
    cout << "3. Division of two numbers\n";
    cout << "4. Words concatenation\n";
    cin >> userChoice;

    while (userChoice < 1 || userChoice > 4)
    {
        cout << "Option not available! Please enter again:\n";
        cin >> userChoice;
    }

    switch (userChoice)
    {
    case 1:
        double h, l;
        cout << "***This is program calculates area of a rectangle***\n";
        cout << "Insert height(m):\n";
        cin >> h;
        cout << "Insert length(l):\n";
        cin >> l;
        cout << "The calculated area is: " << myArea(h, l) << " meter(m)\n";
        break;
    case 2:
        cout << "***This is program multiply two numbers***\n";
        cout << "Insert first number:\n";
        cin >> numOne;
        cout << "Insert second number:\n";
        cin >> numTwo;
        cout << "The multiplied value is: " << myMultiply(numOne, numTwo) << "\n";
        break;
    case 3:
        cout << "***This is program divides two numbers***\n";
        cout << "Insert first number:\n";
        cin >> numOne;
        cout << "Insert second number:\n";
        cin >> numTwo;
        cout << "The divided value is: " << myDivision(numOne, numTwo) << "\n";
        break;
    case 4:
        sOne = "Hello";
        sTwo = "my friend";
        cout << "Concatenated word is: " << myConcat(sOne, sTwo) << "\n";
        break;
    default:
        cout << "default action\n";
        break;
    }
    return 0;
}