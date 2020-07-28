#include<bits/stdc++.h>
using namespace std;
int main(){
char s[100],c;
int i,len;

scanf("%[^\n]%c",s,&c);

len=strlen(s);
for(i=0;i<len;i++){
if(s[i]==' '){continue;}
else  printf("%c",s[i]);
}

return 0;
}
