
//Implementation of "Selection Sort"

void SelectionSort(const int SIZE, int arr[])
{
    int min, temp;

    for (int i = 0; i < SIZE - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < SIZE; j++)
            min = (arr[j] < arr[min]) ? j : min;

        if (i != min)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}