///Accepted. Limit < 3*10^11, so - long long int.

#include<iostream>
using namespace std;

int main()
{
    long long int T, i, rem, N;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        long long int rev=0;
        cin >> N;
        while(N>0)
        {
            rem = N%10;
            rev=rev*10+rem;
            N/=10;
        }
        cout << rev << endl;
    }
}
