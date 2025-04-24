#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> n(5);
    n={1,2,3,4,5};
    cout<<"initial capacity :"<<n.capacity()<<endl;
    n.push_back(6);
    cout<<"final capacity :"<<n.capacity();
    return 0;

}