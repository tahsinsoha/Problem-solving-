#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
//int arr[55];
while(cin>>r>>c){
        int C[5]= {1,10,100,1000,10000};
        int x = 0,bud;
    for(int i=1;i<=c;i++){
           cin>>bud;
           int arr[55],sum=0;
           for(int i=0;i<r;i++){
            cin>>arr[i];
            sum=sum+arr[i];
           }
          // cout<<sum<<endl;
        if(sum<=bud){
				for(int i=4; i>= 0; i--) {
                if (sum-arr[0] +C[i] <=bud){
               x= x+C[i]-arr[0];
               //cout<<x<<endl;
                break;
				}
				}
			} else {
				for (int i= 4;i>=0;i--) {
					if (sum-arr[0]+C[i]<=bud){
                    x=x+C[i];
                    break;
                    }
                }
                }

}
cout<<x<<endl;

}
return 0;
}
