#include<stdlib.h>
#include<stdio.h>

int GCD(int a, int b){
    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main(){
    int S = 0;
    scanf("%d", &S);
    for(int i = 0; i < S; i++){
        int n[6] = { 0 };
        scanf("%d/%d,%d/%d", &n[0], &n[1], &n[2], &n[3]);
        n[5] = n[1] * n[3];
        n[4] = n[1] * n[2] + n[0] * n[3];
        int gcd = GCD(n[4], n[5]);
        printf("%d/%d\n", n[4] / gcd, n[5] / gcd);
    }
    
    return 0;
}
