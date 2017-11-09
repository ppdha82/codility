#define MAX_NUM (1000)
#define MIN_NUM (-1000)

int sumAllElements(int *array, int length)
{
    int i;
    int sum = 0;
    
    for (i = 0;i < length;i++)
    {
        sum += array[i];
    }
    return sum;
}

int getMinValueFrom(int *array, int length, int sumOfAllElement)
{
    int min = MAX_NUM - MIN_NUM;
    int i;
    int sumFromFront = 0;
    int sumFromEnd = sumOfAllElement;
    int difference = 0;
    
    for (i = 0;i < length - 1;i++)
    {
        sumFromFront += array[i];
        sumFromEnd -= array[i];
        difference = sumFromFront - sumFromEnd;
        if (difference < 0)
        {
            difference = -difference;
        }
        if (difference <= min)
        {
            min = difference;
        }
    }
    
    return min;
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int sum = sumAllElements(A, N);
    int min = getMinValueFrom(A, N, sum);
    return min;
}