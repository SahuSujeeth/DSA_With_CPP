//This is for the Hashing the intgers..
#include <bits/stdc++.h>
using namespace std;

int hashh[1000000] = {0};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Precompute
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetching
        cout << hashh[number] << " ";
    }

    return 0;
}