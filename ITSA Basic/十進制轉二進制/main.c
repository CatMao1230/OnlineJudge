#include<stdlib.h>  
#include<stdio.h>

int main(){
    int n; 
    int binary[8] = {0};
    scanf("%d", &n);
    
    if(n >= 0){
        for(int i = 7; i >= 0; i--){  
            binary[i] = n % 2;  
            n /= 2;  
        } 
    }  
    else{ // 負數  
        n = -n;  
        for(int i = 7; i >= 0; i--){  
            binary[i] = n % 2;  
            n /= 2;
        }  
        for(int i = 0; i < 8; i++){  
            binary[i] = (binary[i] == 1 ? 0 : 1);  
        }  
        binary[7]++;  
        for(int i = 7; i >= 0; i--){  
            if(binary[i] == 2){  
                binary[i] = 0;  
                if(i != 0){  
                    binary[i-1]++;  
                }  
            }  
        }
    }
    
    for(int i = 0; i < 8; i++)  
        printf("%d", binary[i]);  
    printf("\n");  
  
    return 0;  
}  