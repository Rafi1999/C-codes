#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=1,i,j,f=0,tmp=0;
    char str[20000];

    gets(str);

    for (i=0; str[i]!='\0'; i++){
        if (str[i]==' '){
            for (j=str[i+1]; str[j]!=' '; j++){
                tmp++;
                ///('!', '.', '?' and ','
                if ( str[j]=='!' || str[j]=='.' || str[j]==', ' || str[j]=='?' || str[j]==',')
                    f++;
            }
            if (tmp==f)
                count--;
            else
                count++;
            tmp=0;
        }
    }
    printf("%d\n",count);
    return 0;
}
