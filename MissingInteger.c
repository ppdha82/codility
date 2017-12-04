int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i = 0;
    int flag_buffer[N];
    int valid_count_in_flag = 0;

    for (i = 0;i < N;i++)
    {
        flag_buffer[i] = 0;
    }
    
    for (i = 0;i < N;i++)
    {
        if (A[i] <= 0 || A[i] > N)
        {
            continue;
        }
        
        if(flag_buffer[A[i] - 1] == 0)
        {
            flag_buffer[A[i] - 1] = A[i];
        }
    }
    
    for (i = 0;i < N;i++)
    {
        if (flag_buffer[i] == 0)
        {
            return i + 1;
        }
        else
        {
            valid_count_in_flag++;
        }
    }
    
    if (valid_count_in_flag == N)
    {
        return N + 1;
    }
    
    return 1;
}