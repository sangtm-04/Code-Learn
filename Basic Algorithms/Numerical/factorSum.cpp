bool isPrime (int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOperation(int n) {
    int i = 2;
    int sum = 0;
    while (n != 1) {
        if (n % i == 0) {
            n /= i;
            sum += i;
        }
        else i++;
    }
    return sum;
}

int factorSum(int n) {
    if (n <= 1) return 0;
    if (isPrime(n)) return n;
    
    int sum = sumOperation(n);
    while (!isPrime(sum) && (sum != n)) {
        sum = sumOperation(sum); 
    }
    return sum;
}
