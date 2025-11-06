#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    cout << "ELEMENTS IN SET ARE: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    int p = 2;

    if (s.find(p) != s.end())
    {
        cout << "ELEMENT EXISTS" << endl;
    }
    else
    {
        cout << "ELEMENT DOESNT EXIST";
    }
    s.erase(s.begin());
    for (int x : s)
    {
        cout << x << " ";
    }
    s.clear();
    cout << endl;
    cout << s.size();
}
