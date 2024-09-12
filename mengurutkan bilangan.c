#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    
void sort(int arr[], int n) {
    int i, j, temp;
   
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
            
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    scanf("%d", &n);

    int nilai[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }

    sort(nilai, n);

    for (i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}