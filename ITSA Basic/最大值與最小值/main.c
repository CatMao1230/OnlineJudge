#include<stdlib.h>
#include<stdio.h>

int main(){
    float num[10], max = -10000, min = 10000;
    for(int i = 0; i < 10; i++){
        scanf("%f", &num[i]);
        if(num[i] > max) max = num[i];
        if(num[i] < min) min = num[i];
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    
    return 0;
}
