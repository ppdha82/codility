int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    unsigned int dividened_number = N;
    int count_for_zero_length = 0;
    int max_length = 0;
    
    while (dividened_number != 0)
    {
        dividened_number >>= 1;
        if (dividened_number & 0x1 == 0x1)
        {
            if (max_length < count_for_zero_length)
            {
                max_length = count_for_zero_length;
            }
            count_for_zero_length = 0;
        }
        else
        {
            count_for_zero_length++;
        }
    }
    return max_length;
}