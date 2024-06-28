#include <stdio.h>
#include <stdbool.h>
int i;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int i,n;
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: \n", n);
    for ( i = 2; i <= n; i++) {
        if (isPrime(i))
		 {
            printf("%d ", i);
        }
    }
}
   

