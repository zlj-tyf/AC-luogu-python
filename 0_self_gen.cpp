#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{
    // cout << "从B2001到B多少\n\n";
    // freopen("gen.txt", "r", stdin);
int i=FN;
    // int endname=1;
    // cin >> i;
    // cout << endname << endl;
    string fname = "B";
    string header = "# ";
    string header2 = " `Python3`和`C++`代码对比\n\n## C++ 代码\n\n```cpp\n\n";
    string middle = "```cpp\n\n ***\n\n## Python 代码\n\n```py\n\n";
    string end = "```py";
    stringstream ss;
    // ss.clear();
    ss << i;
    string str;
    ss >> str;
    cout<<i<<endl;
    // cout<<str<<endl;
    fname += str;
    // cout<<fname<<endl;
    // system("pause");
    string mdname = fname;
    mdname += ".md";
    cout << mdname << endl;
    header += fname;
    header += header2;
    // system("powershell");
    freopen(mdname.c_str(), "w", stdout);
    cout << header << endl;
    // powershell -Command \"cat B2001.cpp\"
    string cmd_cpp = "powershell -Command \"cat ";
    cmd_cpp += fname;
    cmd_cpp += ".cpp\"";
    // cout<<cmd_cpp<<endl;
    system(cmd_cpp.c_str());
    cout << middle << endl;
    string cmd_py = "powershell -Command \"cat ";
    cmd_py += fname;
    cmd_py += ".py\"";
    // cout<<cmd_py<<endl;
    system(cmd_py.c_str());
    cout << end << endl;
    fclose(stdout);
}