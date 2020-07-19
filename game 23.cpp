#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int in,fin;
    int cont=0;
    cin>>in>>fin;
    if((fin%in)) {
        cout<<-1<<endl;
        return 0;
    }
    if(fin/in==1){
        cout<<0<<endl;
        return 0;
    }
    else {
        long long int div= fin/in;
       // cout<<div<<" "<<endl;
        for(int i=1;div>1;i++){
            if(div%2==0){
                div=div/2;
                cont++;
               // cout<<div<<" "<<cont<<endl;
            }
           else if(div%3==0){
                div=div/3;
                cont++;
               // cout<<div<<" "<<cont<<endl;
            }
            else {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
cout<<cont<<endl;
return 0;
}
