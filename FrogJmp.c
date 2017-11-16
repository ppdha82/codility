int solution(int X, int Y, int D)
{
    // write your code in C99 (gcc 6.2.0)
    int jumping_count = 0;
    
    jumping_count = (Y - X) / D + (((Y - X) % D == 0)?0:1);
    
    return jumping_count;
}
