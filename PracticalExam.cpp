#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt[26] = {0};
        for (char c : s)
            cnt[c - 'a']++;
        int pairs = 0;
        for (int i = 0; i < 26; i++)
            pairs += cnt[i] / 2;
        cout << pairs << "\n";
    }
    return 0;
}