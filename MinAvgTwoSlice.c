int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int return_index = 0;
    int real_min_val = 10000;
    int min_avg = 10000;
    int B[N];
    int i;
    int calculated_avg;
    
    for (i = 0;i < N - 1;i++)
    {
        B[i] = (A[i] + A[i + 1]) / 2;
        if (min_avg >= B[i])
        {
            min_avg = B[i];
        }
    }
    
    for (i = 0;i < N -1;i++)
    {
        if (B[i] <= min_avg)
        {
            calculated_avg = (A[i] + A[i + 1] + A[i + 2]) / 3;
            if (real_min_val >= calculated_avg)
            {
                real_min_val = calculated_avg;
                return_index = i;
            }
        }
    }
    return return_index;
}