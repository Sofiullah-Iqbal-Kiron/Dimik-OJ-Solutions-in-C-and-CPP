#include<stdio.h>

int main()
{
    int T, N, i, j;
    scanf("%d", &T);
    if(T<=10)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d", &N);
                printf("Case %d: ", i);
                for(j=1; j<=N; j++)
                {
                    if(N%j==0)
                    {
                        if(j!=N)
                        {
                            printf("%d ", j);
                        }
                        else
                        {
                            printf("%d", j);
                        }
                    }
                }
            printf("\n");
        }
    }

    return 0;
}
