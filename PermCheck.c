// https://codility.com/demo/results/trainingS69QQB-AGX/
int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)
    int B[N];
    int i = 0;
    int total_of_sum = 0;
    
    for (i = 0;i < N;i++)
    {
        B[i] = 0;
        total_of_sum += i + 1;
    }
    
    for (i = 0;i < N;i++)
    {
        printf("A[%d] = %d; B[A[%d]] = %d\n", i, A[i], i, B[A[i] - 1]);
        if (A[i] > N || B[A[i] - 1] != 0)
        {
            return 0;
        }
        else
        {
            total_of_sum -= A[i];
            B[A[i] - 1] = A[i];
        }
    }
    
    if (total_of_sum != 0)
    {
        return 0;
    }
    return 1;
}
