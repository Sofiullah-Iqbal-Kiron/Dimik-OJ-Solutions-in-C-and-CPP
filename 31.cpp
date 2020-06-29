///Time limit exceeded.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int m=0; m<T; m++)
    {
        int N;
        cin >> N;
        int i, j, k, l;

        for(i=2; i<=N; i++)
        {
            unsigned long int sum=0;

            for(j=1; i<=20000000?j<=i/2:j<=i-700000; j++)
            {
                if(i%j==0)
                {
                    sum+=j;
                }
            }
            if(sum==i)
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
