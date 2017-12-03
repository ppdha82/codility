int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int jumped_data[X];
    int i = 0;
    int order_for_insert = 0;
    int last_order = 0;
    
    for (i = 0;i < X;i++)
    {
        jumped_data[i] = 0;
    }
    
    for (i = 0;i < N;i++)
    {
        if (jumped_data[A[i] - 1] != 0)
        {
            continue;
        }
        
        jumped_data[A[i] - 1] = ++order_for_insert;
        last_order = i;
    }
    
    if (order_for_insert != X)
    {
        return -1;
    }
    
    return last_order;
}