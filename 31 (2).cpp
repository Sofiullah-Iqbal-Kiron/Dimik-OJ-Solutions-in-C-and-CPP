#include<iostream>
using namespace std;

int main()
{
    int T, i, j, k, N;
    cin >> T;
    if(T<=100)
    {
        for(i=1; i<=T; i++)
        {
            ///
            cin >> N;
            for(j=1; j<=N; j++)
            {
                int sum=0;
                for(k=j-1; k>=1; k--)
                {
                    if(j%k==0)
                    {
                        sum+=k;
                    }
                }
                if(sum==j)
                {
                    cout << j << endl;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
