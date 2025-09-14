//this is the problem about to print the number from N to 1...
#include <iostream>
using namespace std;
void fun(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    fun(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    fun(n, n);

    return 0;
}