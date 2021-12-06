#include <iostream>
#include "function.h"

using namespace std;






int main(){

    //call a function that accepts a parameter fn, mi and ln , 
    //and return the string greeting.
    string firstname = "Art";
    string lastname = "Cabrillos";
    char mi = 'P';
    //print it
    //cout << hello(firstname, mi, lastname) << endl;

    //store in a variable
    string greeting1 = hello(firstname, mi, lastname);
    string greeting2 = hello("Rovelyn", 'D', "Aniban");
    string greeting3 = hello("", 'D', "Aniban");

    cout << greeting1 << endl;
    cout << greeting2 << endl;
    cout << greeting3 << endl;

    int num1 = 78;
    int num2 = 80;

    cout << max(num1, num2) << endl;


    return 0;
    
}