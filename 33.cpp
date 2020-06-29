#include<iostream>
using namespace std;

int main()
{
    int T, i, j;;
    long A, B, C;
    cin >> T;
        for(i=1; i<=T; i++)
        {
            cin >> A >> B >> C;
            for(j=A; j<=B; j++)
            {
                if(j%C==0)
                {
                    cout << j << endl;
                }
            }
            cout << endl;
        }

    return 0;
}
