#include <stdio.h>
int calculateevenSum(int ar[], int size) 
{
    int evenSum = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (ar[i] % 2 == 0) 
        {
           evenSum += ar[i];
        }
    }
    return evenSum;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    int evenSum = calculateevenSum(arr, size);
    printf("%d
",evenSum);
}