#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N,size[N];
    cout<<"Enter total term: ";
    cin>>N;
    cout<<"Enter all the values: ";
    for(int i=0; i<N; i++){
        cin>>size[i];
}
cout<<"Reverse order values: ";
for(int i=N-1; i>=0; i--){
    cout<<size[i];
}
return 0;
}
