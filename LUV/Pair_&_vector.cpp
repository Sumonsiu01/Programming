//Bismillahir Rahmanir Rahim
//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa1pvSFItamVSQ1JnNFd4VVJfRjE2R1doMjlLZ3xBQ3Jtc0tsa2ZBelVDZWhqQUJoNGtYX1ZJSWROUE5RQ25JQV9zLTlWclhzenRjZU1fRTNvWGI4eTdhQWRJZnpIdG1NZ1hSUXZPQ2hoZUYzMkU4dUdYcklubnBNYjJQNGhMWU9Jc3JIQWM1ZGlWZmRBOXdtcGM0cw&q=https%3A%2F%2Fwww.hackerearth.com%2Fproblem%2Falgorithm%2Fthe-monk-and-class-marks%2F%3Ffbclid%3DIwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE&v=zyGSg3U1K94
#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<int,multiset<string>>marks_map;

    int n;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto cur_it = --marks_map.end();
    while(1)
    {
        auto &students = (*cur_it).second;
        auto &marks = (*cur_it).first;
        for(auto student:students)
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(cur_it == marks_map.begin())
            break;
        cur_it--;
    }
}
