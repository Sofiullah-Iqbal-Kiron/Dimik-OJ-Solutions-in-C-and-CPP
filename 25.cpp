///Accepted.

#include<iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long int a, b;
        cin >> a >> b;
        cout << "LCM = " << (a*b)/gcd(a, b) * b<< endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    int low, i;
    if(a<b){low=a;}
    else{low=b;}
    for(i=low; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}
