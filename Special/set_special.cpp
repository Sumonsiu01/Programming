#include<bits/stdc++.h>
using namespace std;

 set<int>s;




 void preccessor(int key)
 {

     set<int>::iterator it;

     it = s.find(key);
     if(it== s.begin())
     {
         cout<<"There is no predecessor"<<endl;
     }
     else
     {
         it--;
         cout<<"The predecessor of  "<<key<<" is"<<"->"<<*it<<endl;
     }

 }
 void successor(int key)
 {

     set<int>::iterator it;

     it = s.find(key);
     if(it == s.end())
     {
         cout<<"There is no iterator of "<<"->"<<key<<endl;
     }
     else
     {
         it++;
         cout<<"The successor of "<<key<<" is"<<"->"<<*it<<endl;
     }
 }
int main()
{


    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(8);
    s.insert(3);

    int n;
    cout<<"Enter the element you want to find out: ";
    cin>>n;
    preccessor(n);
    successor(n);

}
