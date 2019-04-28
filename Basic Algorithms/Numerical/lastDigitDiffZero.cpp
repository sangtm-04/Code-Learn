int lastDigitDiffZero(int n)
{
    int *factorialArray = new int[100000000];
	int numberOfElementInArray = 1;
	long long carry = 0;
	factorialArray[0] = 1;
    int result = factorialArray[0];
	for (int i = 2; i <= n; i++) {
      for (int j = 0; j < numberOfElementInArray; j++) {
        long long afterMultiply = factorialArray[j] * i + carry;
        carry = (afterMultiply) / 10;
        factorialArray[j] = (afterMultiply) % 10;
      }

      while (carry > 0) {
        factorialArray[numberOfElementInArray] = carry % 10;
        numberOfElementInArray++;
        carry /= 10;
      }
	}
    for (int i = 0; i < numberOfElementInArray; i++) {
      if (factorialArray[i] != 0) {
        result = factorialArray[i];
        break;
      }
    }
    return result;
}
