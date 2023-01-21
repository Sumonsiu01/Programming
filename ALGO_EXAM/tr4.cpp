//* In the name of most merciful Allah *//

#include<bits/stdc++.h>
using namespace std;



int lcs(char *s1,char *s2,int n,int m)
{
    int l[m+1][n+1];

    for(int i = 0;i<=m;i++)
    {
        for(int j = 0;j<=n;j++)
        {
            if(i == 0 || j == 0)
                l[i][j] = 0;

            else if(s1[i - 1] == s2[j-1])
                l[i][j] = l[i-1][j - 1]+1;

            else
            {
                l[i][j] = max(l[i - 1][j],l[i][j-1]);
            }
        }
    }
    return l[m][n];


}

int max(int a,int b)
{
    return (a>b) ? a:b;
}
int main()
{
    char s1[] = "Sumon";
    char s2[] = "mon";

    int sz1 = strlen(s1);
    int sz2 = strlen(s2);

    int ans = lcs(s1,s2,sz1,sz2);
    cout<<ans<<endl;

}
