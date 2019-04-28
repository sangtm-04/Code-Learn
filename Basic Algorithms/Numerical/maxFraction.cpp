int maxFraction(std::vector<int> numerators, std::vector<int> denominators)
{
    int result = 0;
    float maxFraction = (float) numerators[0]/denominators[0];
    for (int i = 0; i < numerators.size(); i++) {
        float temp = (float)numerators[i]/denominators[i];
        if (temp > maxFraction) {
            result = i;
            maxFraction = temp;
        }
    }

    return result;
}
