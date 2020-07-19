#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int n;
    cin>>n;
    vector<int>ache,lagbe,lagbe2,ind;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
bool fl=0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]!=0){
                fl=1;
            ache.push_back(arr[i]);

        }

        else{

            ind.push_back(i);

        }

    }
//cout<<fl<<endl;
    if(fl==0){
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
return 0;
    }
if(fl==1){
    sort(ache.begin(),ache.end());
}
    int j=1;
if(fl==1)
{



    for(int i=0; i<ache.size(); i++)
    {
      //  cout<<ache[i]<<" "<<j<<endl;
        if(ache[i]!=j)
        {
            while(ache[i]!=j)
            {
                lagbe.push_back(j);
                j++;

            }

        }
        j++;

    }

}
if(lagbe.size()==0){
    for(int i=ache[ache.size()-1];  i<=n;i++)
        lagbe.push_back(i);

}
//for(int i=0;i<lagbe.size();i++){
    //cout<<lagbe[i]<<" ";
//}
//cout<<endl;
   // cout<<ache[ache.size()-1]<<endl;
   if(fl==1){
    if(ache[ache.size()-1]!=n)
    {
        for(int k=j; k<=n; k++)
            lagbe.push_back(k);

    }
   }
   // sort(lagbe.begin(),lagbe.end(),greater<int>());

    int v=0;
    for(int i=0; i<ind.size(); i++)
    {
        if(v>lagbe.size()-1)
            break;
       if(ind[i]!=lagbe[v]) {

            if(v<lagbe.size())arr[ind[i]]=lagbe[v];
        v++;
             // cout<<1<<" "<<ind[i]<<" "<<arr[ind[i]]<<endl;
       }
       else {

        lagbe2.push_back(lagbe[v]);
        v++;
           if(v<lagbe.size()) arr[ind[i]]=lagbe[v];
          v++;
           // cout<<2<<" "<<ind[i]<<" "<<arr[ind[i]]<<endl;
       }




    }
int x = 0;
//cout<<lagbe2[0]<<endl;
       for(int i=1; i<=n; i++)
    {
      if(arr[i]==0){
//cout<<i<<endl;
        arr[i]=lagbe2[x];
        x++;
      }

        if(x>lagbe2.size())
            break;

    }

    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}
