
#include<stdio.h>
#include<string.h>

char toCap(char c){
    return (c -= 32);
}

char toSmall(char c){
    return (c += 32);
}

int main(){
    char in[100];
    fgets(in, sizeof(in), stdin);
    printf("You entered %s and", in);

    for(int i=0; i<strlen(in); i++){
        if(in[i] >= 'a' && in[i] <= 'z'){
            in[i] = toCap(in[i]);
        }
        else if(in[i] >= 'A' && in[i] <= 'Z' ){
            in[i] = toSmall(in[i]);
        }
    }

    printf(" The fomatted string is : %s", in);
    return 0;
}