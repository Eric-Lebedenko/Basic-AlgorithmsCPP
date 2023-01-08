
//Implementation of "Quick Sort"

void QuickSort(int start, int end, int arr[])
{
    if (start >= end)
    {
        return;
    }

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);

    quickSort(arr, p + 1, end);
}