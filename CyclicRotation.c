void ShiftArrayBy(int* array, int array_length, int shift_index)
{
    int i;
    int temp_buffer;
    int shift_count;
    
    for (shift_count = 0;shift_count < shift_index;shift_count++)
    {
        temp_buffer = 0;
        for (i = array_length - 1;i > 0;i--)
        {
            if (i == array_length - 1)
            {
                temp_buffer = array[i];
            }
            array[i] = array[i - 1];
        }
        array[0] = temp_buffer;
    }
}

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    ShiftArrayBy(A, N, K);
    result.A = A;
    result.N = N;
    return result;
}