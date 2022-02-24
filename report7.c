#include <stdio.h>

void sort(int scores[], int size);
void printArray(int array[], int size);

int main()
{
    const int SIZE = 6; //定数として配列のサイズを宣言
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    sort(scores, SIZE);
    return 0;
}

void sort(int scores[], int size)
{
    printf("scores=");
    printArray(scores, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (scores[i] < scores[j])
            {
                int tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }
    printf("\nresult=");
    printArray(scores, size);
    
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}