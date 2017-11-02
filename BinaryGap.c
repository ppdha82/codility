int solution(int N) 
{
    // write your code in C99 (gcc 6.2.0)
    unsigned int dividened_number = N;
    int count_for_zero_length = 0;
    int max_length = 0;
    int flag_until_one = 0;

    while (dividened_number != 0)
    {
        if (dividened_number & 0x1)
        {
            if (flag_until_one == 0)
            {
                flag_until_one = 1;
            }
            
            if (max_length < count_for_zero_length)
            {
                max_length = count_for_zero_length;
            }
            count_for_zero_length = 0;
        }
        else
        {
            if (flag_until_one == 0)
            {
                dividened_number >>= 1;
                continue;
            }
            count_for_zero_length++;
        }
        dividened_number >>= 1;
    }
    return max_length;
}
