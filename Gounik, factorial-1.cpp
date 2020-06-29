///Accepted.

#include<iostream>
using namespace std;

long long int factorial(int n)
{
    if(n==1)
        return 1;
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int T, i;
    cin >> T;
    int N[T]; long long int fact[T];
    for(i=1; i<=T; i++)
    {
        cin >> N[i];
        if(N[i]<=15)
        {
            fact[i]=factorial(N[i]);
        }
    }
    for(i=1; i<=T; i++)
    {
        cout << fact[i] << endl;
    }

    return 0;
}
