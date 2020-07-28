#include<bits/stdc++.h>
using namespace std;
int main(){
int  n,cont=0;
double sq,onlysq;
cin>>n;
for(int i=1;i<=n;i++){
     sq=sqrt(n*i);
     onlysq= sqrt(n);
    //onlysq= sq(n);
   if(onlysq==int(onlysq)) {
        n=onlysq;
          cont++;
           cout<<onlysq<<' '<<cont<<endl;
           continue;
    }
    else if(sq==int(sq)) {
            cout<<sq<<' ';
        n=sq;
        cont=cont+2;
        cout<<cont<<endl;
    }
}
cout<<n<<' '<<cont<<endl;

return 0;
}
