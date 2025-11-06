#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "ENTER A NUMBER: ";
    cin >> n;
    int p = n;
    int sum = 0;
    int s = 0;
    while (n > 0)
    {
        n = n / 10;
        s = s + 1;
    }
    while (p > 0)
    {
        int q = 0;
        int r = p % 10;
        sum = sum + round(pow(r, s));
        p = p / 10;
    }
    cout << sum;
}