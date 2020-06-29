///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    while(T--)
    {
        string line1;
        char line2;
        int k = 0;
        cin.ignore();
        getline(cin, line1);
        cin >> line2;
        for(i=0; i<line1.size(); i++)
        {
            if(line1[i]==line2)
            {
                k++;
            }
        }
        if(k>0)
            cout << "Occurrence of '" << line2 << "' in '" << line1 << "' = " << k << endl;
        else
            cout << "'" << line2 << "' is not present" << endl;
    }
    return 0;
}

