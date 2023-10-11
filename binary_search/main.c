#include <stdio.h>
#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0]) 

// func definition
int binary_search(int arr[], int target, int size);

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int size = ARRAY_SIZE(list);
    int number = binary_search(list, 7, size);
    printf("number: %d", number);
    return 0;
}   

int binary_search(int arr[], int target, int size){
  int left = 0; // obvious
  int right = size - 1; // last arr element index
    while (left <= right){
    int middle = (left + right) / 2;
        if (target == arr[middle]){
            return middle;
        } else if (target < arr[middle]){
            right = middle - 1; // exclude the middle index from search
        }else if(target > arr[middle]){
            left = middle + 1;
        }
    }
  return -1; // nada
}