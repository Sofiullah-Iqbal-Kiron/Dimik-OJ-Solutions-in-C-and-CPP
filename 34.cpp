#include<iostream>
using namespace std;

int main()
{
    int T, i, j, A;
    long long B, C;
    cin >> T;
        for(i=1; i<=T; i++)
        {
            cin >> A >> B >> C;
            for(j=1; j<=C; j++)
            {
                if(j%A==0 && j%B==0)
                {
                    cout << j << endl;
                }
            }
            cout << endl;
        }

    return 0;
}
