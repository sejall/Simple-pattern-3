#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"enter rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
                cout<<" ";
                else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
