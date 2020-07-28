#include<iostream>
using namespace std;
 int arr[3007],brr[3007];
   pair<int,int>p[3007];
int main()
{
    int n,k;
    cin>>n;


   set<int>s;


    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

        s.insert(arr[i]);
    }

  if(s.size()<3) {
        cout<<-1<<" "<<-1<<" "<<-1<<endl;
        return 0;
  }
    for(int i=1; i<=n; i++)
    {

       if(brr[arr[i]]==0) p[i]  = pair<int,int>(arr[i],i);

        brr[arr[i]]=1;
    }

    sort(p+1,p+n+1);

   int cnt=0;
    for(int i=1; i<=n; i++){
            if(cnt==3) break;
    if((p[i].second)!=0)
    {cout<<p[i].second<<" ";
     cnt++;
    }
    }

    cout<<endl;

    return 0;
}









