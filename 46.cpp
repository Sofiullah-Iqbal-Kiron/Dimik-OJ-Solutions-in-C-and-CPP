///Accepted. Look carefully at data type and precision. Sqrt function is JHAMELA.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double ans, s;
        s = (a+b+c)*0.5;
        ans = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Area = " << fixed << setprecision(3) << ans << endl;
    }
}
