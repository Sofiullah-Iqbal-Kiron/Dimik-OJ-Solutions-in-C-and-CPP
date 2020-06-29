///Accepted, Problem - 33

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int l, r, d, fd, i;
        scanf("%lld%lld%lld", &l, &r, &d);
        fd = (l / d) * d;
        if(fd < l)
            fd += d;
        for(i = fd; i <= r; i += d)
            printf("%lld\n", i);
        printf("\n");
    }
    return 0;
}
