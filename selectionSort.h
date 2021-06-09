void selectionSort(int arr[], int len)
{
    int i, j, min, holder;

    for(i = 0; i < len-1; i++)
    {
        min = i;

        for(j = i+1; j < len; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        holder = arr[j];
        arr[j] = arr[min];
        arr[min] = holder;
    }
}