// This is for the Character Hashing by the Hashing Array...
// And this is only for the lower case letters onnly not for the uppercase letters that's why here used the 26 hasharray for the easy...
//For the uppercase also we use 26 but for the all character we use 256 with no ch-'a we use simply the hasharray with the size of 256...
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre compute
    int hash[256] = {0}; // Here we can use the 26 size for the lowercase and uppercase letters only...
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        // Fetch
        cout << hash[ch] << endl;
    }

    return 0;
}