
//Implementation of "Shell Sort"

void ShellSort(const int SIZE, int arr[])
{
    int temp, j;
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            temp = arr[i];

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}