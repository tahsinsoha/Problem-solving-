#include<stdio.h>
#include<string.h>
#define mx 400005
char s1[mx],s2[mx];
int cnt,n,m,i,q,ln;
int pre[4000006];
int arr[4000006];

void prepro(){
   i = 1;//lps array te index i cholbe
     q = 0;
    pre[0]  = q = 0;
    while( i <ln ){
        if( s2[i] == s2[q]){
            q++;// aager koytar shathe milse
            pre[i] = q;
            i++;
        }
        else if(q == 0){
            pre[i] = 0;
            i++;
        }
        else{
            q = pre[q-1];
        }
    }

}

int main()
{



    while(scanf("%s",s2)!=EOF)
    {
        memset(pre,0,sizeof(pre));
           ln = strlen(s2);
      //  printf("%d\n",len);
        prepro();

        int cnt = 0;
        int j = pre[ln-1];
      //  printf("%d\n",j);



        while(j>0)
        {
            arr[cnt++]=j;
            j=pre[j-1];
        }

        for(int i=cnt-1; i>=0; i--)
        {
            if(arr[i]==0) continue;
           printf("%d ",arr[i]);
        }
           printf("%d\n",ln);

    }


    return 0;
}

