///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        if(n==0)
        {
            cout << "1" << endl;
        }
        else if(n==1)
        {
            cout << "2 + 1" << endl;
        }
        else if(n>1)
        {
            for(int i=n; i>1; i--)
            {
                cout << "2^" << i << " + ";
            }
            cout << "2 + 1" << endl;
        }
    }

    return 0;
}
