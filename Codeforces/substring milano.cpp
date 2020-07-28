#include <stdio.h>
#include <string.h>

int main() {

        char str[100],pattern[106];
        scanf("%s %s",&str,&pattern);
        int result = 0;

        for(int i = 0 ; i < strlen(str)  ; i++) {
                int j = 0;
                if(str[i] == pattern[j]) {
                        int l = i+1;

                        int loop = 1;

                        for(int k = j+1 ; k < strlen(pattern) ; k++) {
                                if(k == strlen(str)) break;
                                if(pattern[k] == str[l]) {
                                        l++;
                                        loop++;
                                }
                                else break;
                        }

                        if(loop == strlen(pattern)) {
                                result++;
                        }
                }
        }

        printf("%d\n",result);
        return 0;
}
