//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbUxJUFE1amp0UzdCcUlIX0VoNTZweDlQQ1M5Z3xBQ3Jtc0tucUNjUXctRkpDMHBYMkpGNXItSmZlbjNKdkxneVM5cklrTkZxNmhGOWozRjhYSW5pR1dsVDF1XzdpNkNhb21XUXlFX1BZY0x6dGg5Qmk0REdjci1SX2ZVUHd1RTFFWEtZMTQyMHpEcXh6LTQ0WlJvNA&q=https%3A%2F%2Fvjudge.net%2Fproblem%2FUVA-583&v=QMweK4OsetA


//Bismillahir Rahmanir Rahim


#include<bits/stdc++.h>
using namespace std;



const int mx = 1e5;

vector<int>prime;
bool is_prime[mx];


void primegen(int n)
{
    for(int i = 3;i<=n;i+=2) is_prime[i] = 1;


    int sq = sqrt(n);

    for(int i = 3;i<=sq;i+=2)
    {
        if(is_prime[i] == 1)
        {
            for(int j = i*i;j<=n;j+=(i+i))
            is_prime[j] = 0;
        }
    }
        is_prime[2] = 1;
        prime.push_back(2);

        for(int i = 3;i<=n;i+=2)
        {
            if(is_prime[i] == 1)
            {
                prime.push_back(i);
            }
        }
}

vector<long long> fector(long long n)
{

vector<long long>fect;

    for(auto u:prime)
    {
        if(1ll*u*u>n) break;
        if(n%u == 0)
        {
            while(n%u == 0)
            {
                fect.push_back(u);
                n /= u;
            }
        }
    }
    if(n>1)
        fect.push_back(n);
    return fect;
}


int main()
{
    int lms = 1e5;

    primegen(lms);

    long long n ;
    while(cin>>n)
    {
        if(n == 0)
            break;
        vector<long long>ans = fector(abs(n));

        reverse(ans.begin(),ans.end());
        if(n<0)ans.push_back(-1);

        reverse(ans.begin(),ans.end());

        cout<<n<<" = "<<ans[0];
        for(int i = 1;i<ans.size();i++)
        {
            cout<<" x "<<ans[i];
        }
        cout<<endl;
    }


}
/*test case

-190
-191
-192
-193
-194
195
196
197
198
199
200
0
output


-190 = -1 x 2 x 5 x 19
-191 = -1 x 191
-192 = -1 x 2 x 2 x 2 x 2 x 2 x 2 x 3
-193 = -1 x 193
-194 = -1 x 2 x 97
195 = 3 x 5 x 13
196 = 2 x 2 x 7 x 7
197 = 197
198 = 2 x 3 x 3 x 11
199 = 199
200 = 2 x 2 x 2 x 5 x 5
*/
