#include<bits/stdc++.h>
using namespace std;
int main(){
char c;
while( cin>>c){
       // char c;
    int cont=0;
    while(true){
        if(c=='\n'){
            break;
        }
        else if(isalpha(c)){
            while(isalpha(c)){
                scanf("%c",&c);
                //cin>>c;
            }
                cont++;
        }
else {
    	scanf("%c", &c);
    	//cin>>c;
}
    }
    cout<<cont<<endl;
}


return 0;
}
