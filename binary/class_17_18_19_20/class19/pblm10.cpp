/// In the name of ALLAH
///https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3M3ZEgwNlZZOHVjX3dSQU9RQVdSNFlaTi02UXxBQ3Jtc0tsREJCbWxQeGI2bmtud1ItZUR5NHZGOE12SWc5dE91cnZrMDVIVFZSNjR5ejdmRDVkLWZ1WWQxS2VTUGJ1bllrM29SVndBVEZXMmdMV2J2VHc1alNKdTVVY1hiVFRZMFF5OV9POHhvdV9zZHg2OU9lYw&q=http%3A%2F%2Fwww.lightoj.com%2Fvolume_showproblem.php%3Fproblem%3D1062

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    optimize();

    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        double x, y, c;
        cin >> x >> y >> c;

        double l = 0, r = min ( x, y );

        for ( int i = 0; i < 100; i++ ) {
            double d = ( l + r ) / 2;

            double h1 = sqrt ( ( x * x ) - ( d * d ) );
            double h2 = sqrt ( ( y * y ) - ( d * d ) );

            double h = ( ( h1 * h2 ) / ( h1 + h2 ) );

            if ( h < c ) r = d;
            else l = d;
        }

        fraction();
        cout << "Case " << tc << ": " << l << endl;
    }


    return 0;
}
