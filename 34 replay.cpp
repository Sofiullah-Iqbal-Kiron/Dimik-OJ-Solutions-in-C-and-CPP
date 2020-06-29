#include<iostream>
using namespace std;

int main()
{
    int T, i, j, A, B, C, AB;
    cin >> T;
    if(T<=100)
    {
        for(i=1; i<=T; i++)
        {
            cin >> A >> B >> C;
            AB=A*B;
            for(j=1; j*AB<=C; j++)
            {
                cout << j*AB << endl;
            }
            cout << endl;
        }
    }

    return 0;
}
