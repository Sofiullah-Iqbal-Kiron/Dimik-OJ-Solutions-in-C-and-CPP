#include<iostream>
using namespace std;

int main()
{
    int l, i, j;
    cout << "How long your word in length: "; cin >> l;
    char input[l];
    cin >> input;
    for(i=0; i<l; i++)
    {
        if(input[i]=='s')
        {
            input[i]='$';
        }
        if(input[i]=='t')
        {
            input[i]='&';
        }
    }

    cout << input << endl;

    return 0;
}

