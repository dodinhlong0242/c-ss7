#include<stdio.h>

    int main() {
        int n;
        printf("nhấp số lượng phần tử của mảng: ");
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i< n; i++) {
            do{
                printf("nhập phần tử thứ %d ( phải là số lẻ): ", i + 1);
                scanf("%d", &arr[i]);
                if(arr[i] % 2 == 0) {
                    printf("phần tử không phải là số lẻ! hãy nhập lại.\n");
                }
            }while (arr[i] % 2 == 0);
        }
    printf("\nmảng bạn đã nhận lại:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        
    }
    printf("\n");
    return 0;
}