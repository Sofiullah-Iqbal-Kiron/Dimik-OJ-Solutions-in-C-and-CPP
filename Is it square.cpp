#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x, s, ss;
    cin >> x;
    s = sqrt(x);
    ss = s*s;
    if(ss==x)
    {
        cout << "YES." << endl;
    }
    else
    {
         cout << "NO." << endl;
    }

    return 1;
}
