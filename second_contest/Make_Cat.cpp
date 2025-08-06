#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string cat = "cat";
    sort(s.begin(), s.end());
    sort(cat.begin(), cat.end());
    if (s == cat)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}