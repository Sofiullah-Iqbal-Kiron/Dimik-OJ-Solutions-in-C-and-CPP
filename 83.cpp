#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    long long int N, i;
    cin >> T;
    while(T>0)
    {
        cin >> N;
        for(i=1; i<N; i++)
        {
            if(pow(2, i)==N)
            {
                break;
            }
        }
        if(pow(2, i)==N)
        {
            cout << "It's a power of 2" << endl;
        }
        else
        {
            cout << "Not a power of 2" << endl;
        }

        T--;
    }
}
