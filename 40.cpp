/// ধারার যোগফল
//Accepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, j, X, K;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        int sum=0;
        cin >> X >> K;
        for(j=0; j<=K; j++)
        {
            sum += (pow(X, j));
        }
        cout << "Result = " << sum << endl;
    }

    return 0;
}
