//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjJsUzl4M1FfS0JsbFJGckpxb0VhTG1LMThNd3xBQ3Jtc0trTWUzS1ROZmdTQjNLUGlnREdMdmZmZ1RVcGxGNG90dXBRc2pvaUFsXzUxMDBOYmtoYlBzbDdKajJzZDM2QVJhUnpRS2pnSlFibE96RkV1SFpGa3JrdjBiQTZLUEwxSE5UbDBKVlp5aXBwNUktanlFUQ&q=http%3A%2F%2Fwww.lightoj.com%2Fvolume_showproblem.php%3Fproblem%3D1137
#include<bits/stdc++.h>

using namespace std;
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dl double
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int tc = 1; tc<=t; tc++)
    {
        dl n,c,L;
        cin>>L>>n>>c;
        dl L1 = (1+(n*c))*L;
        dl l = 0,r = 1e18;
        for(int i = 0; i<100; i++)
        {
            dl R = (l+r)/2;

            dl ans =  R*2.0 * asin(L/(2.0*R));
            if(ans<L1)
            {
                r = R;
            }
            else
                l = R;


        }

        dl R = l;
        dl h = R - sqrt((R*R )- ((L/2.0) * (L/2.0)));

        fraction();
        cout<<"Case "<<tc<<": "<<h<<endl;




    }
    return 0;

}
