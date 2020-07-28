#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<string>st;
        vector<string>v;
        map<string,int>mpp,mn,pl,used;
        map<string,string>now;
        for(int i=1; i<=n; i++)
        {

            string s;
            cin>>s;
            v.push_back(s);
            st.insert(s);
            mpp[s]++;
            used[s]=1;

        }

        cout<<n-st.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            if(mpp[v[i]]>1)
            {
                string t = v[i];

                mn [t] = t[3]-'0';
                mn[t] = mn[t]-0;

                pl[t] = t[3]-'0';
                pl[t]= 9-pl[t];

                //cout<<mn[t]<<" "<<pl[t]<<endl;
            }

            now[v[i]]=v[i];
        }

        for(int i=0; i<v.size(); i++)
        {

            string p = v[i];
            //cout<<mpp[p]<<endl;
            int flag=0;
            if(mpp[v[i]]==1)
            {

                cout<<v[i]<<endl;
                used[p]=1;

            }
            else
            {


                if(used[p]==1)
                {
                    cout<<p<<endl;
                    used[p]=2;
                }
                else
                {
                    if(mn[p])
                    {

                        while(1)
                        {
                            if(mn[p]==0)
                                break;
                            string n ="";
                            for(int i=0; i<3; i++)
                                n+=p[i];
                            int k = (p[3]-'0'-mn[p]);
                            stringstream ss;
                            string str;
                            ss << k;
                            ss>>str;
                            // cout<<k<<endl;
                            n+=str;
                            mn[p]--;
                            if(!used[n])
                            {
                                cout<<n<<endl;
                                flag=1;
                                used[n]=1;
                                break;



                            }


                        }
                    }

                     if(pl[p] && flag==0)
                    {

                        while(1)
                        {
                            if(pl[p]==0)
                                break;
                            string n ="";
                            for(int i=0; i<3; i++)
                                n+=p[i];
                            int k = (p[3]-'0'+pl[p]);
                            stringstream ss;
                            string str;
                            ss << k;
                            ss>>str;
                            //cout<<k<<endl;
                            n+=str;

                            pl[p]--;
                            if(!used[n])
                            {
                                cout<<n<<endl;
                                flag=1;
                                used[n]=1;
                                break;



                            }


                        }
                    }
                }
            }

        }
    }

    return 0;
}






