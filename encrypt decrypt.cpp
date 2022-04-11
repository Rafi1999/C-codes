#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/ ";
    char s1[]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
    char test[1901990];
    int i,j, n;
    cin >> n;
    if (n == 1)
    {
        scanf("%s", test);
        for (i=0; test[i]; i++)
        {
            for (j=0; s1[j]; j++)
            {
                if (test[i] == s1[j])
                    cout << s[j];
            }
        }
        cout << endl;
    }
    else if (n == 2)
    {
        while ((getchar()) != '\n');
        gets(test);
        for (i=0; test[i]; i++)
        {
            for (j=0; s[j]; j++)
            {
                if (test[i] == s[j])
                    cout << s1[j];
            }
        }
        cout << endl;
    }
    return 0;
}
