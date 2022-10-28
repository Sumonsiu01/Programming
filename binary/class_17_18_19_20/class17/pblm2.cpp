https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbUpmR085Xy15a1lfLUdnUWpMLUk0dThBWTBkZ3xBQ3Jtc0trLTlrczNiRkozay1ydnBWanQxSUdEU084aVFlcnY3V0tmbXQtLWFQaFEyYW0ybUZhWXQ5alRaeGlPZlRmYmJqaFFMTWJ1VlY0MWlqZlNLMmhvellSWEN6YTBfUnJLM09ZQl9pVk0wcU5McUtoYmlkWQ&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FRPLC%2F
#include<bits/stdc++.h>
using namespace std;

int n;
const int mx = 1e6+123;
long  long arr[mx];
bool check(long long val)
{
    for(int i =0; i<n; i++)
    {
        val+=arr[i];
        if(val<=0)
            return 0;
    }
    return 1;

}
int main()
{
    int T;
    cin>>T;
    for(int tc=1; tc<=T; tc++)
    {
        cin>>n;
        for(int i =0; i<n; i++)cin>>arr[i];
        long long l = 1,r = 1e14,ans;
        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(check(mid))
            {
                ans = mid;
                r = mid-1;
            }
            else
                l = mid+1;

        }
        cout<<"Scenario #"<<tc<<": "<<ans<<endl;
    }
}
