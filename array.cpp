#include <iostream>
using namespace std;

void myFunction(string x[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << i + 1 << "." << x[i] << "\n";
    }
}

void nexFunction(int c)
{
    while (c<1 || c>3 )
    {
        cout << "Invalid ouput!! Please enter number range from 1 to 3\n";
        cin >> c;
    }
    
    switch (c)
    {
    case 1:
        cout << "This is case 1\n";
        break;
    case 2:
        cout << "This is case 2\n";
        break;
    case 3:
        cout << "This is case 3\n";
        break;
    default:
        cout << "List is not available!\n";
        break;
    }
}

int main()
{
    string arr[5];
    int c;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "enter words: \n";
    //     cin >> arr[i];
    // }
    // myFunction(arr, 5);
    cout << "Choose your case: 1, 2, or 3\n";
    cin >> c;
    nexFunction(c);
    return 0;
}