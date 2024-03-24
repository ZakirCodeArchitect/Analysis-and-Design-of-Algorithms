#include<iostream>
using namespace std;

// Generating Fibonacci Series up to n number of terms
int main()
{
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;

    int first=0,
        second=1,
        next=0,
        repeatition=1;

    cout<<"\n Fibonacci Series : "<<endl;

    
    while(repeatition<=n)
    {
        if(repeatition=1)   // printing first element
        {
            cout<<first<<" ";
        }
        if(repeatition=2)   // printing second element
        {
            cout<<second<<" ";
        }

        // updation of next term
        next = first + second;
        first = second;
        second = next;

        cout<<next<<" ";

        ++repeatition;
    }
}   