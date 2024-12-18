#include<stdio.h>

    int main() {
        int n;
        printf("nhập số lượng phần tử của mảng: ");
        scanf("%d", &n);
        int arr[n];
        printf("nhập %d phần tử cho mảng:\n", n);
        for (int i = 0; i < n; i++) {
            printf("phần tử %d: ", i + 1);
            scanf("%d",&arr[i]);
        }
        printf("\nmảng bạn vừa nhập là:\n");
        for (int i = 0; i < n; i++) {
            printf("nhập tử %d: %d\n", i + 1, arr[i]);
        }
        return 0;
    }