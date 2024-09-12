#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


bool isPrime(long long N) {
    // Kasus khusus
    if (N <= 1) return false; 
    if (N == 2) return true;  
    if (N % 2 == 0) return false; 

    
    long long limit = (long long)sqrt(N);
    for (long long i = 3; i <= limit; i += 2) {
        if (N % i == 0) return false; 
    }

    return true; 
}

int main() {
    long long N;
    
    
    scanf("%lld", &N);
    
    
    if (isPrime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}

