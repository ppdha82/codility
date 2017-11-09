#include <stdlib.h>

int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int i;

    int result_value = 0.0;
    
    qsort(A, N, sizeof(int), compare);    

    for (i = 0;i < N;i+=2)
    {
        if (i == N - 1)
        {
            return A[N - 1];
        }
        
        if (A[i] != A[i + 1])
        {
            result_value = A[i];
            break;
        }
    }
    return result_value;
}