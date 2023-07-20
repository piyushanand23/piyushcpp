#include <iostream>
using namespace std;

int main() {
    int integerType; 
    char charType; 
    float floatType; 
    double doubleType; 
    bool comparison, booleantype;
    int num1, num2;
  
    cout << "Size of int is: " << 
    sizeof(integerType) <<"\n"; 
  
    cout << "Size of char is: " << 
    sizeof(charType) <<"\n"; 
      
    cout << "Size of float is: " << 
    sizeof(floatType) <<"\n";
  
    cout << "Size of double is: " << 
    sizeof(doubleType) <<"\n"; 

    cout << "Size of boolean is: " << 
    sizeof(booleantype) <<"\n"; 
    
    booleantype = true;
    if (booleantype)
        cout<< "Image is colorful";
    else
        cout << "Image is not colorful";

    cout << "Enter a number: ";
    cin >> num1;
    cout << "enter another number: ";
    cin >> num2;
    comparison = num1 > num2;
    if (comparison)
        cout << "First number is bigger than second number.";
    else   
        cout << "Second number is bigger.";

    return 0;
}
