#include <stdio.h>
#include <string.h>

int trie[10000][27], cnt;

char pattern[100], maxP;

void buildTrie(char s[])
{
    int i, pos = 1, lp = strlen(pattern);

    for(i = 0; i < lp; ++i)
    {
        if(trie[pos][s[i] - 97] > 0)
            pos = trie[pos][s[i] - 97];
        else
        {
            trie[pos][s[i] - 97] = ++cnt;
            pos = cnt;
        }
    }
    trie[pos][26] = 1;
}

int patternMatching(char s[])
{
    int i, lp = strlen(s), pos = 1;

    for(i = 0; i < lp; ++i)
    {
        if(trie[pos][s[i] - 97] > 0)
            pos = trie[pos][s[i] - 97];
        else
            break;
    }

    if(i == lp && trie[pos][26])
        return 1;
    return 0;
}


int main()
{
    int t, n, i;

    scanf("%d", &t);

    while(t--)
    {
        memset(trie, 0, sizeof(trie));

        cnt = 0;
        maxP = 0;

        scanf("%d", &n);

        for(i = 0; i < n; ++i)
        {
            scanf("%s", pattern);
            buildTrie(pattern);
        }

        scanf("%s", pattern);
        if(patternMatching(pattern))
            printf("Found\n");
        else
            printf("Not Found\n");
    }

    return 0;
}

/*
5

3
abc
ad
adc

adc


3
asp
asddd
dssd

dasp

3
asppp
asddd
dssd

asp



*/
