///Accepted.

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    //Give cin.ignore() or not, it will be accepted.
    //cin.ignore();
    while(T--)
    {
        char ch;
        cin >> ch;
        if(ch>=65 && ch<=90)
        {
            cout << "Uppercase Character";
        }
        else if(ch>=97 && ch<=122)
        {
            cout << "Lowercase Character";
        }
        else if(ch>=48 && ch<=57)
        {
            cout <<  "Numerical Digit";
        }
        else
        {
            cout << "Special Character";
        }
        cout << endl;
    }
}
