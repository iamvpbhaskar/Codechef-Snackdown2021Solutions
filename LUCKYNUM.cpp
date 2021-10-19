#include<iostream>
using  namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==7||y==7||z==7)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
