// Sum of N numbers without parameters and with function...
#include <iostream>
using namespace std;
int fun(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fun(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);

    return 0;
}