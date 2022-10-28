//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbklySmtVcUN2SVZkbzVRRnAtMWFQQmNEckhVZ3xBQ3Jtc0tuOGo0RE42MDRyWkdLSlJjT3pheUVobHpRMEdHSG56eXl2TER0U1B5SEhYblVkSFozREtnb1pCaWZxaEhwWGp6aHliTVBuRHNrTjQ2ZzdjWGtFX3VKYzhnN0ZFT1ZJMEF1bm1WdDN1Zkp6eUNqYVI5aw&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fcount-squares%2F0
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        cout<<floor(sqrt(N-1))<<endl;;
    }
}
