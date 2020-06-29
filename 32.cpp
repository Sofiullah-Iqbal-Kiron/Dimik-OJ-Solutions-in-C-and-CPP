//Accepted.

#include<iostream>
using namespace std;

int main()
{
    int T, X, i, k;
    long int N;
    cin >> T;
    if(T<100)
    {
        for(i=1; i<=T; i++)
        {
            cin >> X >> N;
            if(X<N)
            {
                for(k=1; X*k<=N; k++)
                {
                    cout << X*k << endl;
                }
            }
            else
            {
                cout << "Invalid!" << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
