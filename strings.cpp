#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string temp;
    cin>>s;
    int j,i;
    int k,l;
    int flag=0;
    int ln=s.length();
    for(int i=0; i<(ln-1); i++)
    {
        temp=s.substr(i,2);
        if(temp=="AB")
        {
            k=i+2;
            break;
        }

    }

  /*  if(temp!="AB"&&temp!="BA"){

        printf("NO");
        return 0;

    }*/
    for( j=k;j<(ln-1);j++){
        string temp2=s.substr(j,2);
        if(temp=="AB"&&temp2=="BA"){

            flag=1;
            break;
        }
    }
    for(int l=0; l<(ln-1); l++)
    {
        temp=s.substr(l,2);
        if(temp=="BA")
        {
            k=l+2;
            break;
        }

    }
      for( j=k;j<(ln-1);j++){
        string temp2=s.substr(j,2);
        if(temp=="BA"&&temp2=="AB"){

            flag=1;
            break;
        }
    }
    if(flag==1){printf("YES");}
    else printf("NO");
    return 0;
}
