#include <stdio.h>
int main() 
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    int evenPosSum = 0;
    for (int i = 0; i < size; i += 2) {
        evenPosSum += arr[i];
    }
    printf("%d
",evenPosSum);
}