#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

   for(int left = 0, right = n - 1; left < right;left++ , right--){
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
   }
for(int i = 0;i <n;i++){
    cout<<arr[i]<<" ";
}

return 0;






}