#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    // cout << "从B2001到B多少\n\n";
    int endname;
    cin >> endname;
    stringstream ss;
    string str;
    for (int i = 2001; i <= endname; i++)
    {
        string cmd="g++ 0_self_gen.cpp -DFN=";
        stringstream ss;
        ss<<i;
        cmd+=ss.str();
        string exec="./a";
        system(cmd.data());
        system(exec.data());
    }
}
