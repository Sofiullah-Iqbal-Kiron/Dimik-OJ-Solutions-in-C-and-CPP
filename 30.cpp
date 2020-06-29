///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int T, i, N, j;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        int k=0, sum=0;
        cin >> N;
        for(j=N-1; j>=1; j--)
        {
            if(N%j==0)
            {
                sum+=j;
            }
        }
        if(sum==N)
        {
            cout << "YES, " << N << " is a perfect number!" << endl;
        }
        else
        {
            cout << "NO, " << N << " is not a perfect number!" << endl;
        }
    }

    return 0;
}
