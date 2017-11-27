int solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0) 
    int remain_by_A = A % K;
    int remain_by_B = B % K;

    printf("share = %d; remain_by_A = %d; remain_by_B = %d\n", (B-A)/K, remain_by_A==0?1:0, remain_by_B==0?1:0);
    if (B - A == 0)
    {
        return 1;
    }
    return ((B / K) - (A / K) + (remain_by_A == 0 ? 1:0) + (remain_by_B == 0 ? 1:0));
}
