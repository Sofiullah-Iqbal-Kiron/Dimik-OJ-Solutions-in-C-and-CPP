#include<iostream>
#include<conio.h>
using namespace std;

long long int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int T, N, i, j, d;
    long long int a;
    cin >> T;
    int k[T];
    for(i=1; i<=T; i++)
    {
        k[i]=0;
        cin >> N;
        a=fact(N);
        do
        {
            d=a%10;
            if(d==0)
            {
                k[i]++;
            }
            a/=10;
        }
        while(d==0);
    }
    for(i=1; i<=T; i++)
    {
        cout << k[i] << endl;
    }

    getch();

    return 0;
}
