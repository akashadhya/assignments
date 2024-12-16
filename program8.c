#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char rev[100];
    int len =0;
    int flag = 1;

    printf("Enter a string to check if its palindrome or not: ");
    fgets(str, sizeof(str), stdin);
    
    len = strlen(str);

    for(int i=0; i<len; i++){
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    for(int i=0; i<len; i++){
        if(rev[i] != str[i]){
            flag=0;
            break;
        }
    }
    printf("%s\n", rev);

    printf("\nThe reverse of the string %s is %s and both are %s , so %s is %s.", str, rev, (flag?" same ": " not same "), str, (flag? " Palindrome": "not Palindrome"));
}