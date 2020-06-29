#include<bits/stdc++.h>
using namespace std;

float factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int T, i, j, n;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> n;
        float sum=2;
        if(n>2)
        {
            for(j=2; j<n; j++)
            {
                sum += 1/factorial(j);
            }
        }
        else if(n==1)
        {
            sum = 1;
        }
        else if(n==2)
        {
            sum = 2;
        }
        cout << fixed << setprecision(4) << sum << endl;
    }
}
