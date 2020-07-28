#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
char str1[1000], str2[1000];
cin>>str1;
cin>>str2;
for(i=0;i<strlen(str1);i++){
    if(str1[i]==str2[i]){
        printf("0");
    }
    else printf("1");

}
return 0;
}
