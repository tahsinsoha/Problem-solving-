#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int n=s.size();
stack<char>st;
int cnt=0;
for(int i=0;i<s.size();i++){
      /*  if(s[0]=='}'||s[0]==')'||s[0]==']'||s[0]=='>') {
            cout<<"Impossible"<<endl;
            return 0;
           }*/

if(s[i]=='('||s[i]=='{'||s[i]=='['||s[i]=='<') st.push(s[i]);

else if(s[i]==')'){
    //if (st.top()=='(') st.pop();
      if(st.empty()) {
        cout<<"Impossible"<<endl;
        return 0;
    }
   else  if (st.top()=='(') st.pop();
    else {
            //cout<<st.top()<<endl;
    st.pop();
    cnt++;}
}
else if(s[i]=='}'){
   // if (st.top()=='{') st.pop();
      if(st.empty()) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    else  if (st.top()=='{') st.pop();
    else {
       // cout<<st.top()<<endl;
            st.pop();
    cnt++;
    }
}
else if(s[i]==']'){
        //st.pop();
   // if (st.top()=='[') st.pop();
     if(st.empty()) {
        cout<<"Impossible"<<endl;
        return 0;
    }
     else if (st.top()=='[') st.pop();
    else {
            //cout<<st.top()<<endl;
            st.pop();
    cnt++;}
}
else if(s[i]=='>'){
       // st.pop();
  //  if (st.top()=='<') st.pop();
      if(st.empty()) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    else  if (st.top()=='<') st.pop();
    else{
       // cout<<st.top()<<endl;
            st.pop();
    cnt++;
    }
}
 /*else if(s[i] == ')' || s[i] == '}' || s[i] == ']' || s[i] == '>')
        {
            if(st.empty())
            {
                cout<<"Impossible"<<endl ;
                return 0 ;
            }
            else
            {
                char ch = st.top() ; st.pop() ;
                if((ch == '(' && s[i] == ')') || (ch== '{' && s[i] == '}') || (ch == '[' && s[i] == ']') || (ch == '<' && s[i] == '>')) continue ;
                else cnt++ ;
            }
        }
        else if(s[i]=='>'){
       // st.pop();
   // if (st.top()=='<') st.pop();
      if(st.empty()) {
        cout<<"Impossible"<<endl;
        return 0;
    }
     if (st.top()=='<') st.pop();
    else{
       // cout<<st.top()<<endl;
            st.pop();
    cnt++;
    }
}*/
}
if(st.empty())cout<<cnt<<endl;
else cout<<"Impossible"<<endl;

return 0;
}

