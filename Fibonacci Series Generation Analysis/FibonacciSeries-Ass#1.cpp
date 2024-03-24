#include<iostream>
using namespace std;

void Iterative(int n)
{
    int first = 0,
        second = 1,
        next;

    for(int i=0;i<=n;i++)
    {
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }
}

fibonacci(int n)    // generating fibonacci series for recursive one
{
    if(n<=1)    // for first and second term
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);     // adding the previous 2 terms
}

void recursive(int n)   
{

    for(int i=0;i<=n;i++)
    {
        cout<<fibonacci(i)<<" ";    // recursively calling for fibonacci series
    }

    cout<<"\n";
}
int main()
{
    int n;

    cout<<"\nEnter the maximum number of serires : ";
    cin>>n;

    cout<<"\nIterative Approach : ";
    Iterative(n);

    cout<<"\nRecursive Approach : ";
    recursive(n);

}