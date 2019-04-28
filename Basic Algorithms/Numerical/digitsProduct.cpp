int digitsProduct(int product) {
    if (product < 10) {
    	if (product == 0) return 10;
		return product;
	}
        
    string result;
    for (int i = 9; i > 1; i--) {
        while (product % i == 0) {
            product /= i;
            result = char('0' + i) + result;
        }
    }
    if (product != 1) return -1;
	return stoi(result);
}
