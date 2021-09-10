#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    //INITIALIZING UNORDERED SET BY ARRAY OF REPITITIVE ELEMENTS
    int arr[] = {1,1,2,2,3,3,4,5,6,7,8,9};

    int n = sizeof(arr)/sizeof(arr[0]);

    std::unordered_set<int> sO(arr,arr+n);

    cout<<"Set out of repitive element is :-";

    for(auto it = sO.begin(); it!=sO.end(); it++)
        cout<<(*it)<<" ";

    cout<<endl<<endl;

    std::unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";

    cout << endl;
    cout << "Size:-" << s.size() << " ";
    s.clear();
    cout << "Size:-" << s.size() << " " << endl;

    //find returns iterator
    //count returns either 0 or 1

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    if (s.count(10))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    cout << "Count returns:-" << s.count(15) << endl;

    cout << "Size:-" << s.size() << endl;
    s.erase(15);
    cout << "Size:-" << s.size() << endl;

    //ANOTHER WAY OF REMOVING AN ELEMENT

    auto it = s.find(10);
    s.erase(it);

    cout << "Size:-" << s.size() << endl;

    s.insert(15);
    s.insert(10);

    if (s.find(15) != s.end())
    {
        cout << "element found." << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}
