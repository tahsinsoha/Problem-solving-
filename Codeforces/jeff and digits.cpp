#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n,input,i,j,l;
    int sum1=0;
    int sum2=0;
    int flag=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
     for(i=0;i<n;i++){
      if(arr[i]==5){
        sum1++;
      }
     else {sum2++;}

     }
      for(i=sum1;i>0;i--){

        if((5*i)%9==0){
                 l=i;
                flag=1;
            break;
        }
      }
if(flag==1){
        if(sum2==0){printf("-1\n");}
        else {
    for(int j=1;j<=l;j++){
        printf("5");
    }

for(int j=1;j<=sum2;j++){
    printf("0");
}
        }

}
 if(flag==0) {
        if(sum2==0) printf("-1\n");
      else   printf("0");}

    return 0;
}
