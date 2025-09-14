//this is the probelem about prinnt the 1 to N timmes with using the recursion...
#include <iostream>
using namespace std;
void fun(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    fun(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    fun(1, n);
    return 0;
}
