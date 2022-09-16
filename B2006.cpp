#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,rx,ry;
    cin>>rx>>a>>ry>>b;

    cout<<fixed<<setprecision(2)<<(a*rx-b*ry)/(a-b)<<endl;
	return 0;
}
