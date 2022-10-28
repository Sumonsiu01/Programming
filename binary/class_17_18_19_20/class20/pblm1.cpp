//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa1BPamhWV0pvcmJNLTdpLUpsaDZaNDJvWUs0Z3xBQ3Jtc0trVDdNWkdEaWJYcXdPWDk0N2k5aV9BRndTSU1jeHRPdi1QaUlGSk1qX2tKcW9SekNaMG1RZlJHNlJpb2JqT0NmTDI3VlBxbHYyU3hyZHRpcUxVMHI4bmRwR2stQ0lab2psTVJpNjhNNnBFQUdCNUZRUQ&q=http%3A%2F%2Fwww.lightoj.com%2Fvolume_showproblem.php%3Fproblem%3D1062
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    int t;
    cin>>t;
    for(int tc = 1; tc<t; tc++)
    {
        double x,y,c;
        cin>>x>>y>>c;
        double l = 0,r = min(x,y);
        for(int i = 0; i<100; i++)
        {
            double d = (l+r)/2.0;


            double h1 = sqrt((x*x) - (d*d));
            double h2 = sqrt((y*y) - (d*d) );
            double h = (h1*h2)/(h1+h2);

            if(h<c) r = d;
            else
                l = d;
        }
        fraction();
        cout<<"Case "<<tc<<":"<<l<<endl;

    }

}
