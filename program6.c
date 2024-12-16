// Online C compiler to run C program online
#include <stdio.h>
#define N 100
int main() {
    char *str="qwertyuioplkjhgfdsazxcvbnm";
    char *ptr = str;
    int i;
    int vowel=0, consonent=0;
    for(i=0; i<N; i++){
        if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')){
            if(*ptr == 'a'|| *ptr == 'e'|| *ptr == 'i'|| *ptr == 'o'|| *ptr == 'u' || *ptr == 'A'|| *ptr == 'E'|| *ptr == 'I'|| *ptr == 'O'|| *ptr == 'U' ){
                vowel++;
            }
            else{
                consonent++;
            }
        *ptr++;
        }
    }
    
    printf("Number of vowels %d", vowel);
    printf("\nNumber of consonents %d", consonent);
    
    return 0;
}