#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    stack<int>l;
    stack<int>r;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        r.push(arr[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        l.push(arr[i]);

    }
//cout<<l.top()<<" "<<r.top()<<endl;
    vector<string>s;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            if(l.top()<r.top())
            {
                s.push_back("L");
                v.push_back(l.top());
                l.pop();

            }
            else
            {
                s.push_back("R");
                v.push_back(r.top());
                r.pop();
            }
        }

        else if(l.top()==v[i-1])
        {
           if(r.top()>v[i-1]) {
            v.push_back(r.top());
            s.push_back("R");
            r.pop();
           }

        }
        else if(r.top()==v[i-1])
        {
           if(l.top()>v[i-1]){
            v.push_back(l.top());
            s.push_back("L");
            l.pop();
           }
        }
        else   if(l.top()>v[i-1] && r.top()>v[i-1] && l.top()<r.top())
        {
            s.push_back("L");
            //  cout<<l.top()<<" "<<r.top()<<" "<<endl;
            v.push_back(l.top());
            l.pop();
        }
        else if(l.top()>v[i-1] && r.top()>v[i-1] && r.top()<l.top())
        {
            //cout<<v[i-1]<<endl;
            s.push_back("R");
            v.push_back(r.top());
            r.pop();
        }
        else if(l.top()>v[i-1] && r.top()>v[i-1] && r.top()==l.top())
        {
            int p = r.top();
            v.push_back(p);
            l.pop();
            r.pop();
            if(l.top()<=v[i-1]&&r.top()<=v[i-1])
            {
                s.push_back("L");
                //v.push_back(p);
                break;
            }
            else if(l.top()>v[i-1]&& r.top()>v[i-1]&& l.top()<r.top())
            {
                s.push_back("L");
               // v.push_back(p);
                r.push(p);
            }
            else if(l.top()>v[i-1] && r.top()>v[i-1] && r.top()<l.top())
            {
                s.push_back("R");
              //  v.push_back(p);
                l.push(p);
            }
        }
        else   if( l.top()>v[i-1])
        {
            s.push_back("L");
            v.push_back(l.top());
            l.pop();
        }
        else if( r.top()>v[i-1])
        {
            s.push_back("R");
            v.push_back(r.top());
            r.pop();
        }
        else   if(l.top()<=v[i-1] && r.top()<=v[i-1] )
        {
            //s.push_back("L");
            //  cout<<l.top()<<" "<<r.top()<<" "<<endl;
            //v.push_back(l.top());
            // l.pop();
            break;
        }
    }
    cout<<s.size()-1<<endl;
    for(int i=0; i<s.size()-1; i++)
    {
        cout<<s[i];
    }
    return 0;
}
