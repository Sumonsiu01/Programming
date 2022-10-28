//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbnNWMWtVdXk3RUI5cW9VZFh1eF9kTjQwR1I2Z3xBQ3Jtc0ttZWpBTVdDTXlWUVV0eFhUX1p5Q20yVUE1LWFYeEVPVHc5czJjT0p2RlRjMDRKTk5CNDk3YnZXSTlfWUNUZnBTa3VwdVduVi1tU2xNTkIxQjhKQjFyTTYzejNsMXRxNGFLV0xndnEydUhoRDdoNG96dw&q=http%3A%2F%2Fwww.lightoj.com%2Fvolume_showproblem.php%3Fproblem%3D1043


#include<bits/stdc++.h>
using namespace std;
#define endline '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int tc = 1; tc<=t; tc++)
    {
        double AB,AC,BC,R;
        cin>>AB>>AC>>BC>>R;
        double l = 0,r = AB;
        for(int i = 0; i<100; i++)
        {
            double AD = (l+r)/2.0;

            double x = AD/AB;
            double AE = x*AC;
            double DE = x*BC;

            double s1 = (AD+DE+AE)/2;
            double s2 = (AB+BC+AC)/2;

            double areaADE = sqrt(s1*(s1-AD)*(s1-DE)*(s1- AE));
            double areaABC = sqrt(s2*(s2-AB)*(s2-BC)*(s2- AC));

            double areaTra = areaABC - areaADE;

            if(R<(areaADE/areaTra)) r = AD;
            else l = AD;

        }
        fraction();
        cout<<"Case "<<tc<<": "<<l<<endl;

    }
}

