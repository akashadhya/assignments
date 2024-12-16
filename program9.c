#include <stdio.h>
#include <string.h>


int main(){
    char sen [] = "what the fuchka ";
    for(int i=0; i<strlen(sen); i++){
        if(sen[i] == 32) continue;
        sen[i] -= 32;
    }
    
    printf("%s", sen);
    return 0;
}