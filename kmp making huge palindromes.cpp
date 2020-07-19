#include<bits/stdc++.h>
using namespace std;
char s1[1000010],s2[1000010];
int cnt,n,m;
int pre[1000010];
void prepro(){
  int i = 1;
    int q = 0;
    pre[0]  = q = 0;
    while( i < n){
        if( s2[i] == s2[q]){
            q++;
            pre[i] = q;
            i++;
        }
        else if(q == 0){
            pre[i] = 0;
            i++;
        }
        else{
            q = pre[q-1];
        }
    }

}
int kmp(){
//memset(pre,0,sizeof(pre));
//prepro();
 int k=0;
for(int i=0;i<n;i++){
    while(k>0&&s1[i]!=s2[k]){
        k=pre[k-1];
    }
    if(s2[k]==s1[i]) k++;

}
return n-k;
}
int main(){

    ios_base::sync_with_stdio(0);cin.tie();

    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s1);
n=strlen(s1);
//sm=s2.size();
strcpy(s2,s1);
reverse(s2,s2+n);
       //s1=" "+s1;
       // s2=" "+s2;


        //cnt=0;
       // kmp();
       prepro();
  printf("Case %d: %d\n",++c, n + kmp());
    }
return 0;
}
