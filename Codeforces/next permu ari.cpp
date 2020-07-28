#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s= "aaaaa";

    while( next_permutation(s.begin(),s.end()) )
        cout<< s <<endl;
}
