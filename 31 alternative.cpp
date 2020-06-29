///Time Limit Exceeded. Form 52 somossa book.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int m=0; m<T; m++)
    {
        unsigned long long int N;
        cin >> N;
        int j, k, l;
        unsigned long long int i;

        for(i=1; i<=N; i++)
        {
            unsigned long int sum=1;

            for(j=2; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    sum = sum+j+i/j;
                }
            }
            if(sum==i && sum!=1)
            {
                cout << sum << endl;
            }
        }

        if(m==(T-1))
        {
            return 0;
        }
        else
        {
            cout << endl;
        }
    }
}

