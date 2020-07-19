#include<iostream>
#include<cstdio>
#include<iomanip>
#define endl'\n'
using namespace std;
int main()
{
    int x;
    int y=26;
    double d1=45.362554,dd=54.32;
    cout<<"d1 = "<<setprecision(3)<<fixed<<d1;
    cout<<",dd = ";
    cout<<setprecision(3)<<dd<<endl;
    bool flag=false;
    string s="Welcome CSE",postfix="th batch!",dept="CSE",other_dept;
    cout<<s.substr(2)<<":"<<s.substr(5,4)<<endl;
    other_dept=s.substr(0,8)+dept+"me";
    if(dept==s.substr(8,3))cout<<s<<y<<postfix<<endl;
    else cout<<other_dept<<y-18<<postfix<<endl;
    cout<<s<<y<<postfix<<endl;
    cout<<" Length of other_dept="<<other_dept.size()<<endl;
    cout << "Welcome CSE "<<y<<"th batch!"<<endl;
    cin>>x;
//std::cout<<"You have inputted="<<x<<endl;
    printf("You have inputted %d\n",x);
    flag=2;
    cout <<"You have inputted="<< x <<",flag=" <<flag<<endl;
    cout<<"Size of bool="<<sizeof(bool)<<'\n';

    return 0;
}
