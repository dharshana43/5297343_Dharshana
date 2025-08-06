#include<stdio.h>
#include<ctype.h>

int main(){
    char str[1000];
    int freq[26] = {0};

    printf("Enter a Sentence: ");
    fgets(str,sizeof(str),stdin);

    for (int i=0;str[i];i++){
        if(isalpha(str[i])){
            freq[tolower(str[i]) - 'a'] =1;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i] == 0){
            printf("not pangram\n");
            return 0;
        }
    }
    printf("pangram\n");
    return 0;
}