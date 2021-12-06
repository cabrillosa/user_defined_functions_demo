#include <iostream>
#include "function.h"

using namespace std;


double max(double x , double y)
{
    double max;

    if (x >= y) {
        max = x;
    } else {
        max = y;
    }
    return max;
}

string hello (string firstname, char mi, string lastname)
{
    //function body
    string fullname = firstname + " " +mi+ " " + lastname;

    if(firstname=="" || lastname==""){
        return "";
    } else {
        return "Hello! How are you " + fullname;
    }
    
}
