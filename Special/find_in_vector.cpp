#include <bits/stdc++.h>

using namespace std;
int main()
{

vector<int>vec = { 100, 200, 300, 400, 500, 600, 700 };

int search_element = 500;

vector<int>::iterator it;

it = find(vec.begin(), vec.end(), search_element);

if (it != vec.end())
cout<< "Congratulations!!! element " <<search_element<< " is present in Vector ";
else
cout<< "Sorry the element " <<search_element<< " is not present in Vector" ;
return 0;
}
