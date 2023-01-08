
//Implementation of "Insertion Sort"

void InsertionSort(const int SIZE, int arr[])
{
    int temp, j;

    for (int i = 1; i < size; i++) {
        temp = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }
}