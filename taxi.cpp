#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,i,input;
int sum1=0,sum2=0,sum3=0,sum4=0,ans;
vector<int>arr;
cin>>n;
for(i=0;i<n;i++){

    cin>>input;
    arr.push_back(input);
    if(arr[i]==1) sum1++;
    else if(arr[i]==2)sum2++;
    else if(arr[i]==3)sum3++;
    else sum4++;
}

 if((sum2%2)==0||(sum2==1)){
    if(sum3==sum1||sum3>sum1){
           // printf("%d%d%d%d",sum1,sum2,sum3,sum4);
       ans=sum4+ceil((sum2*2)/4)+sum3;

    }
else if(sum3<sum1){
          ans=sum4+ceil((sum2*2)/4)+sum3+ceil((sum1-sum3)/4);
}
}
else if(sum2%2!=0){
if(sum1==sum3){

    ans=sum4+floor(sum2/2)+sum3+1;
}
else if(sum1>sum3){
    ans=sum4+sum3+floor(sum2/2)+ceil(((sum1-sum3)*3+2)/4);
}
else if(sum3>sum1){

    ans=sum4+sum1+floor(sum2/2)+ceil(((sum3-sum1)+2)/4);
}

}

cout<<ans<<endl;

return 0;
}
