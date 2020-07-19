#include<bits/stdc++.h>
using namespace std;
int main(){
int i;
char s;
cin>>i;
cin>>s;
if(i>=1&&i<=2){
    if(s=='A'||s=='D'){printf("window");}
else  {printf("aisle");}

}
else if(i>2&&i<21){

 if(s=='A'||s=='F'){printf("window");}
 else if(s>='B'&&s<='E'){
    printf("aisle");
 }
else printf("neither");

}
else if(i>20&&i<66){
    if(s=='A'||s=='K'){printf("window");}
else if(s=='C'||s=='D'||s=='G'||s=='H'){
    printf("aisle");

}
else printf("neither");

}

return 0;
}
