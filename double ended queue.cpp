#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   // string s;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        deque<int>dq;
        int sizee,line;
        cin>>sizee>>line;

        int cnt=0;
        while(line--)
        {
            int push;
            string s;
            cin>>s;
            if(s=="pushLeft"){
                    cin>>push;
                if(cnt==sizee){
                    cout<<"The queue is full"<<endl;
                    continue;
                }
                dq.push_front(push);
                cout<<"Pushed in left: "<<push<<endl;
                cnt++;
            }
          else   if(s=="pushRight"){
                    cin>>push;
                if(cnt==sizee){
                    cout<<"The queue is full"<<endl;
                    continue;
                }
                dq.push_back(push);
                cout<<"Pushed in right: "<<push<<endl;
                cnt++;
            }
             else   if(s=="popLeft"){

                if(cnt==0){
                    cout<<"The queue is empty"<<endl;
                    continue;
                }

                cout<<"Popped from left: "<<dq.front()<<endl;
                dq.pop_front();
                cnt--;
            }
                         else   if(s=="popRight"){

                if(cnt==0){
                    cout<<"The queue is empty"<<endl;
                    continue;
                }
               // dq.pop_back();
                cout<<"Popped from right: "<<dq.back()<<endl;
                dq.pop_back();
                cnt--;
            }


    }
        }


    return 0;
}
