///Accepted.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for(int m=0; m<T; m++)
    {
        string S;
        cin >> S;
        sort(S.begin(), S.end());
        int i, j, count[S.size()]= {};

        for(i=0; i<S.size(); i++)
        {
            for(j=0; j<S.size(); j++)
            {
                if(S[j]==S[i])
                {
                    count[i]++;
                }
            }

            if(S[i] != S[i-1])
            {
                cout << S[i] << " = " << count[i] << endl;
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
