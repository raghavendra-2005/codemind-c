#include<stdio.h>
int calculateSum(int arr[], int N) 
{
    int sum = 0;
    for (int i = 0; i < N; ++i) {
       sum += arr[i];
    }
    return sum;
}
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }
    int sum = calculateSum(arr,N);
    printf("%d
",sum);
}