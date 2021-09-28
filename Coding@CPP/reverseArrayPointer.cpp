#include<iostream>

using namespace std;
 
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void reverseArray(int arr[], int N){
    int *start = arr; // starting position of array
    int *end = arr + N - 1; // ending position of array
    while(start < end) {
        swap(start, end);
        start++;
        end--;
    }
    
}


 
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 
