#include<stdlib.h>
#include<stdio.h>

int main(){
    
    int money, a, b, c;
    scanf("%d,%d,%d,%d", &money, &a, &b, &c);
    money = money - a * 15 - b * 20 - c * 30;
    if(money >= 0){
        int five = 0, fifty = 0;
        while(money >= 50){
            money -= 50;
            fifty++;
        }
        while(money >= 5){
            money -= 5;
            five++;
        }
        printf("%d,%d,%d\n", money, five, fifty);
    }
    else{
        printf("0\n");
    }
    
    return 0;
}
