int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int total_of_sum = 0;
    int i = 0;
    
    for (i = 1;i < N + 1;i++)
    {
        total_of_sum += i;
    }
    
    for (i = 0;i < N;i++)
    {
        total_of_sum -= A[i];
    }
    
    if (total_of_sum != 0)
    {
        return 0;
    }
    
    return 1;
}
