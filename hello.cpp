#include <iostream>
using namespace std;

void myStuff(){
       for(int i=0; i<10; i++){
        cout << "i could die in your arms\n";
   }
}

int main (){
   cout << "Hello world"<< endl;
    int n;
    while (n != 0 )
    {
        cout << "insert n value:\n";
        cin >> n;
    }

    myStuff();
    
   return 0; 
}