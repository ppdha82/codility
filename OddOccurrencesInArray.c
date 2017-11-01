int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i = 0;
    int unpaired_number = 0;
    int paired_array[N];
    for (i = 0;i < N;i++)
    {
        int j;
        if (A[i] == -1)
        {
            continue;
        }
        unpaired_number = A[i];
        
        for (j = N - 1;j > i;j--)
        {
            if (A[j] == -1)
            {
                continue;
            }
            
            if (A[i] == A[j])
            {
                A[i] = -1;
                A[j] = -1;
                unpaired_number = 0;
                break;
            }
        }
        
        if (unpaired_number != 0)
        {
            break;
        }
    }
    return unpaired_number;
}