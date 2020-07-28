#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,del,i,j,cont=0;
    char c,w ;
    string s;
    map<char,int>mpp;
    cin>>n>>del;
    cin>>s;
    for( i=0;i<n;i++){

        mpp[s[i]]++;
    }
map<char,int> :: iterator it;


     for(w='a';w<='z';w++){

                if(cont==del){
                    cout<<s;
                    return 0;
                }
          for(j=0;j<s.size();j++){
                 if(cont==del){cout<<s;
                 return 0;}
            if(s[j]==w){
                   // cout<<j<<" ";
                    s.erase(s.begin()+j);
            j--;
                    cont++;
            }

          }



     }
    return 0;
}
