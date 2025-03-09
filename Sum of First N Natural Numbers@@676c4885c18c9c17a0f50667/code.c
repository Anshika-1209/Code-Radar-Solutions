#include <stdio.h>
int main() {
    int N, sum = 0;
    scanf("%d", &N);

    // Loop to calculate the sum of the first N natural numbers
    for (int i = 1; i <= N; i++) {
        sum=sum+i;  // Add the current number to sum
    }
    // Print the result
    printf("%d:%d\n",N,sum);

    return 0;
}

