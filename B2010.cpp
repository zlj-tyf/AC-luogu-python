#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i, j;
    i = floor(a / b);
    j = a - b * i;
    cout << i << " " << j << endl;
}