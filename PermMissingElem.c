int sumAllElement(int length)
{
    int sum = length + 1;
    while (length > 0)
    {
        sum += length;
        length--;
    }
    return sum;
}

int findingMissingValue(int *array, int length, int sum)
{
    int i;
    
    for (i = 0;i < length;i++)
    {
        sum -= array[i];
    }
    return sum;
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    if (N <= 0)
    {
        return 1;
    }

    
    int sum = sumAllElement(N);
    int result = findingMissingValue(A, N, sum);
    return result;
}