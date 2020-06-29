///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s, ss;
        bool palindrome = true;
        cin >> s;
        int i, j;
        for(i=s.size()-1; i>=0; i--)
        {
            ss.push_back(s[i]);
        }
        for(i=0, j=ss.size()-1; i<s.size() && j>=0; i++, j--)
        {
            if(s[i]!=s[j])
            {
                palindrome=false;
                break;
            }
        }
        if(palindrome==false)
        {
            cout << "Sorry! It is not Palindrome!" << endl;
        }
        else
        {
            cout << "Yes! It is Palindrome!" << endl;
        }

    }
}
