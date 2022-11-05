#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<pair<int,string>>student;

    for(int i = 0;i<n;i++)
    {
        int marks;
        string name;
        cin>>name>>marks;

        student.push_back({marks*-1,name});
    }
    sort(student.begin(),student.end());

    for(auto u:student)
    {
        cout<<u.second<< " "<<u.first*-1<<endl;
    }
}

