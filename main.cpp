#include<iostream>
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    std::unordered_set <int> s ;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for(auto it=s.begin(); it!=s.end(); it++)
        cout<<(*it)<<" ";

    cout<<endl;
    cout<<s.size()<<" ";
    s.clear();
    cout<<s.size()<<" ";


    return 0;
}