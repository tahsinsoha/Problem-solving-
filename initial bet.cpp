    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int n,a,sum=0;
    n=5;

    for(int i=1;i<=n;i++){
        cin>>a;
    sum+=a;
    }
    if(sum%n==0 && sum!=0) cout<<sum/n<<endl;
    else cout<<-1<<endl;

    return 0;
    }

