int pagesNumbering(int numberOfPagesInput)
{
    std::vector <int> numberOfPagesArray;
    for (int i = 9; i <= 99999999; i = i*10+9) {
        numberOfPagesArray.push_back(i);
    }
    int numberOfDigits = numberOfPagesInput;
    for (int i = 0; i < numberOfPagesArray.size(); i++) {
        if (numberOfPagesInput > numberOfPagesArray[i]) 
			numberOfDigits = numberOfDigits + (numberOfPagesInput - numberOfPagesArray[i]);
		else break;
    }
    return numberOfDigits;
}
