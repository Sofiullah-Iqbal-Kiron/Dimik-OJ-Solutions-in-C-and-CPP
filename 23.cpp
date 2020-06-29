#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, j;
    char s[100];
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> s;
        for(j=1; j<=100; j++)
        {
            printf("%d", s[j]-64);
        }
        cout << endl;
    }
}
