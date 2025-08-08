#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* caesarCipher(char* s, int k){
    int len = strlen(s);
    char* result = malloc(len + 1);
    k %= 26;

    for (int i = 0; i< len; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            result[i] = ((s[i] - 'a' + k) % 26) + 'a';
        else if (s[i] >= 'A' && s[i] <= 'Z')
            result[i] = ((s[i] - 'A' + k) % 26) + 'A';
        else
            result[i] = s[i];
    }
    result[len] = '\0';
    return result;
    
}

int main() {
    int n, k;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    scanf("%d", &k);

    char* encrypted = caesarCipher(s, k);
    printf("%s\n", encrypted);

    free(encrypted);
    return 0;
}