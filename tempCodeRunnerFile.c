#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);

        if ((n & (n - 1)) == 0) 
        {
            printf("NO\n");
        } else 
        {
        
            printf("YES\n");
        }
    }

    return 0;
}