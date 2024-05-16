#include <iostream>
using namespace std;
int main()
{
    int x =20, y=15;
    int *xp = &x;
    int *yp = &y;
    int sum = *xp + *yp;
    cout<<"sum: "<<sum<<endl;

    return 0;
}
