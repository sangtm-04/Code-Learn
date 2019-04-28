int greatestCommonDivisor (int a, int b) {
    if (a < b) greatestCommonDivisor (b, a);
    if (a % b == 0) return b;
    return greatestCommonDivisor (b, a%b);
}

bool isPrime (int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int primeFactors (int n) {
    int i = 2; 
    int result = 0;
    while (n != 1) {
        if (n % i == 0) {
            n /= i;
            result = i;
        }
        else i++;
    }   
    if (result == 0) return -1;
    return result;
}

int greatestCommonPrimeDivisor(int a, int b)
{
    int gcd = greatestCommonDivisor(a, b);
    if (isPrime(gcd)) return gcd;
    return primeFactors(gcd);
}
