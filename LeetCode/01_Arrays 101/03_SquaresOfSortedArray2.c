int *sortedSquares(int *nums, int ASize, int *returnSize) {
    int *result =malloc(sizeof(int) * (*returnSize = ASize));
    int *Start = nums; 
    int *End = nums + ASize - 1;
    int index = ASize - 1;
    
    while (Start <= End) 
    {
        *Start = *Start > 0 ? *Start : *Start * -1;
        *End = *End > 0 ? *End : *End * -1;
        
        if (*Start >= *End)
        {
            result[index--] = *Start * (*Start);
            Start++;
        }
        
        else
        {
            result[index--] = *End * (*End);
            End--;
        }
    }
    return result;
}