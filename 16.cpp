#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int T;
    cin >> T;
    fflush(stdin);
    for(int m=0; m<T; m++)
    {
        int i, j, n, r, sp;
        char s[1001], w[1001], ch;
        int c=0;
        sp=0;
        while(true)
        {
            ch = getchar();
            if(ch=='\n')
            {
                break;
            }
            else
            {
                if(ch==' ')
                {
                    sp++;
                }
                s[c]=ch;
                c++;
            }
        }
        s[c]='\0';

        for(i=0; i<c; i++)
        {
             r=0;
            for(j=0; s[r]!=' ' || s[r]!='\n'; j++, r++)
            {
                w[j]=s[r];
            }
            w[j]='\0';
            r=j+1;
            for(n=strlen(w)-1; n>=0; n--)
            {
                cout << w[n-1];
            }
            cout << " ";
        }
        cout << endl;
    }
}
