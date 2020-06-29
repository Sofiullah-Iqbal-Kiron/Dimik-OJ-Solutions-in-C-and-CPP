///Accepted. B**ler website.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, i, j, n, T;
    cin >> T;
    for(k=1; k<=T; k++)
    {
        cin >> n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        if(k<T)
        {
            cout << endl;
        }
    }

    return 0;
}
