#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1){
            cout<<"0"<<endl;
        }
        else if(n%2!=0)
        {
            cout<<n/2+1<<endl;
        }

        else
        {
            cout<<n/2<<endl;
        }
    }

}
