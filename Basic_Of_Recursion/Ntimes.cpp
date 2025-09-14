#include <iostream>
// this is about for the recursion of the basics
// When a function call itself until a specific condition meets then it is called Recursion...
//If their is no base condtion in the recursion then it is gone to the infinte loop for the infinte..
// Base condition means their we have to give a condtion to stop the loop is that called  Recursion... that is the called base condition... 
// the first problem is called N times to print the string with the recursion..
//If we did't addd any condition in the recursive ffunction then it iis gone to the segment fault it is called overstacck flow... to avoid this we use the base ccondtio this to thisa aoid 
using namespace std;
void fun(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Sahoo" << endl;
    fun(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    fun(1, n);

    return 0;
}