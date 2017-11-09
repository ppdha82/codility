struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int i;
    int B[N];
    int first_index_for_shift = N - (K % N);

    if (N == 0)
    {
        return result;
    }
    else if ((N <= 1) || (first_index_for_shift == 0))
    {
        result.A = A;
        result.N = N;
        return result;
    }
    
    for (i = 0;i < N;i++)
    {
        B[i] = A[(first_index_for_shift + i) % N];
    }
    
    for (i = 0;i < N;i++)
    {
        A[i] = B[i];
    }
    
    result.A = A;
    result.N = N;
    return result;
}