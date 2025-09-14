#include <bits/stdc++.h>
using namespace std;
int last = 0, slast = 0;
int fibonaciCheck(int n)
{
    if (n <= 1)
        return n;
    last = fibonaciCheck(n - 1);
    slast = fibonaciCheck(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonaciCheck(n);

    return 0;
}