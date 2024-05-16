#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void multi(int arr[],int len){
for (int i=0; i<len;i++){
    if(arr[i]%3==0 && arr[i]%5==0){
        cout<<arr[i]<<"is the multiplication of: 3 & 5\n";
    }else if(arr[i]%3==0){
     cout<<arr[i]<<" is the multiplication of: 3\n";
     }else if(arr[i]%5==0){
     cout<<arr[i]<<" is the multiplication of: 5\n";
     }else{
     cout<<arr[i]<<" is not a multiplication of 3 & 5\n";
     }
}
}

void oddeven(int arr[],int len){
for (int i=0; i<len;i++){
     if(arr[i]%2 !=0){
        cout<<arr[i]<<" is odd\n";
        }else{
            cout<<arr[i]<<" is even\n";
            }
        }
    }

void Palindrome(int arr[],int len){
    for(int i=0;i<len;i++){
    int num = arr[i];
    int rev=0;
    int remainder=0;

    while(num !=0){
        remainder = num%10;
        rev = rev*10 + remainder;
        num/=10;
    }
    if(arr[i]==rev){
      cout<<arr[i]<<" is palindrome\n";
    }else{
    cout<<arr[i]<<" is not palindrome\n";
    }
}}

void Prime(int arr[],int len){
    int flag=0;
    for(int i=0; i<len; i++){
    for(int j=2; i<arr[j]; j++){
        if(arr[i]%j==0){
            flag++;
        }
    }
    if(flag==0){
        cout<<arr[i]<<" is prime\n";
    }else{
    cout<<arr[i]<<" is not prime\n";
    }
    }
}

int main(){
int arr[5];
int len=sizeof(arr)/sizeof(int);
srand(time(0));
for(int i=0;i<len;i++){
    arr[i]=100+rand()%35;
}
oddeven(arr,len);
cout<<endl;
multi(arr,len);
cout<<endl;
Prime(arr,len);
cout<<endl;
Palindrome(arr,len);

return 0;

}
