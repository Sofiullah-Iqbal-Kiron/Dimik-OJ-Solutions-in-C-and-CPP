///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        string s;
        getline(cin, s);
        int c = 0;
        for(int i=0; s[i]!=NULL; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                c++;
            }
        }
        cout << "Number of vowels = " << c << endl;
    }
}
