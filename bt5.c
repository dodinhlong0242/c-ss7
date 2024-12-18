#include<stdio.h>

    int main() {
        int arr[5] = {25, 30, 15, 10, 40};
        int max = arr[0];
        int min = arr[0];
        for (int i = 1; i < 5; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
                
            }
        }
        printf("phần tử lớn nhất trong mảng là: %d\n", max);
        printf("phần tử bé nhất trong mảng là: %d\n", min);
        return 0;
    }