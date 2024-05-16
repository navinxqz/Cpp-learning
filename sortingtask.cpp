#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int arr[30];
int originalArr[30];

void resetArray() {
    for (int i = 0; i < 30; i++) {
        arr[i] = originalArr[i];
    }
}
int selection(){  
    int step=0;

    for(int i=0;i<30-1;i++){
        int temp = i;
        for(int j=i+1; j<30; j++){
            if(arr[j]<arr[temp]){
                temp=j;
            }
        } if(temp != i){
            swap(arr[temp],arr[i]);
            step++;
        }
    } return step;
}

int insertion(){
    int step=0;

    for(int i=1; i<30; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j = j-1;
            step++;
        } arr[j+1] = temp;
    } return step;
}

int bubble(){
    int step=0;

    for(int i=0; i<30-1;i++){
        for(int j=0; j<30-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            step++;
        }
        }
    } return step;
}

int binary_search(int num, int size) {
    int start = 0, end = size - 1, mid;
    int steps = 0;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == num) {
            return mid;
        }
        if (arr[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        steps++;
    }
    return -1;
}

int main(){
    srand(time(0));
    for(int i=0;i<30;i++){
        arr[i]=rand()%801 + 200;
    }
    cout<<"\n\tRandom Array:\n";
    for(int i=0; i<30; i++){
        cout<<arr[i]<<" ";
    }

    cout << "\nSteps required in selection is: " << selection();
    resetArray();
    
    cout << "\nSteps required in insertion is: " << insertion();
    resetArray();
    cout << "\nSteps required in bubble is: " << bubble() << endl;

     int num = 556;
    int index = binary_search(num, 30);

    if (index != -1) {
        cout << "Number 556 found at index " << index << " using binary search." << endl;
        cout << "Number of steps required in binary search is: " << index + 1 << endl;  // Adjust steps based on the returned index
    } else {
        cout << "Number 556 not found in array." << endl;
    }
    return 0;
}