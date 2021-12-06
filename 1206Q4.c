#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sen[99999],a,b,sen2[99999];
    gets(sen);
    scanf(" %c",&a);
   
    scanf(" %c",&b);
    
    
    for(int i =0;i<strlen(sen);i++){
        if(sen[i]==a){
            sen[i]=b;
        }
    }
    puts(sen);
}
