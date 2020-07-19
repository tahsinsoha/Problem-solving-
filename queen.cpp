#include<bits/stdc++.h>
using namespace std;
vector<int> arr[100010];
int par[100010];
int brr[100010];
//map<int,int>mp;
//map<int,int>res;
int mp[100010];
int main()
{
    int n,a,b,flag;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;// a er child i
        if(a==-1)
            continue;
        arr[a].push_back(i); //parent ke respect korle 1 hobe b
        brr[i]=b; // i parent ke resp kore ki na
        par[i]=a;
//mp[a]++;// koita child ase a er oita jog kortesi
//if(b==1) res[a]++; // child one ki na
        mp[i]=b; // a parent ke i respect kore ki na
    }
int cont=0;

    for(int i=1; i<=n; i++)
    {
        flag=0;
        if(arr[i].size()==0 && brr[i]==1 )
        {
            cont++;
            cout<<i<<" ";
            continue;
        }
        if(brr[i]==1)
        {
            for(int j=0; j<arr[i].size(); j++)
            {
                if(mp[arr[i][j]]==0)
                {
                    flag=1;
                    break;
                }
            }

            if(flag==0){
                    cont++;
                cout<<i<<" ";
            }
        }
    }
    if(cont==0) cout<<-1;
    cout<<endl;
    return 0;
}
