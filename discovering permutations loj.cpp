#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,t;
   scanf ("%d", &t);
for(int cs=1;cs<=t;cs++){
     scanf ("%d%d", &n, &k);
    string s = "";
    for(int i=0;i<n;i++){
        s=s+char(65+i);
    }

    int cont=0;
      printf ("Case %d:\n", cs);
      cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
            cont++;
            if(cont<=(k-1)){
                 cout<<s<<endl;
            }

    }
}


return 0;
}
