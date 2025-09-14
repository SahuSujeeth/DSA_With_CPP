/*this is also same like the Onne to n but this is without using the i+1, here we used i-1 this is works like
works like the stack funtion which is the called last in first out...
*/  
#include <iostream>
using namespace std;
void fun(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    fun(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    fun(n, n);

    return 0;
}