///Accepted.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n, sn;
        cin >> n;
        sn = sqrt(double(n));
        if(sn*sn==n)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
