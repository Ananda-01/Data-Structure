#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)  //O(N^2)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"Hello"<<endl;
        }
    }

    // selection sort a kind of this type of sorting
    for(int i=0;i<n-1;i++)   // O(N*(N-1)) ....O(N^2)
    {
        for(int j=i+1;j<n;j++)
        {

        }
    }
    return 0;
}