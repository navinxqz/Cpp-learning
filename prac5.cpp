#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< " Enter the size of the array: ";
    cin>>n;

    int num[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"no. Array data: ";
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        int div=0;
        for(int j=2;j<=num[i]-1;j++)
        {
            if(num[i]%j==0)
            {
                div++;
            }
        }
    if(div==0)
    {
        cout<<num[i]<< " is prime."<<endl;
    }
    else{
        cout<<num[i]<<" isn't a prime."<<endl;
    }
    }
    return 0;


}

