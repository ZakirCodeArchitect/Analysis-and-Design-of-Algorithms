#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the maximum term in a fibonacci series: ";
    cin>>n;

    int first=0,
        second=1,
        next;

    for(int next=0;next<=n;next=first+second)
    {
        cout<<next<<" ";
        first=second;
        second=next;
    }
}