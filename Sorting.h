void Bubblesort()
{
   int a[20],i,j,temp,mini,n;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   printf("Enter the %d elements\n",n);
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Bubble Sorting elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);

}
void Selectionsort()
{
   int a[20],i,j,temp,mini,n;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        mini=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[mini])
                mini=j;
        }
        temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
   printf("Sorting elements are:\n");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}
void Insertionsort()
{
   int a[20],i,j,temp,mini,n;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   printf("Enter the %d elements\n",n);
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
          a[j+1]=a[j];
          j--;
        }
        a[j+1]=temp;
    }
   printf("Sorting elements are:\n");
   for(i=0;i<n;i++)
   printf("%d\n",a[i]);
}

void quicksort(int a[],int lb,int ub)
{
  int j;
    if(lb<ub)
    {
        j=quickpartition(a,lb,ub);
        quicksort(a,lb,j-1);
        quicksort(a,j+1,ub);
    }
}
int quickpartition(int a[],int lb,int ub)
{
    int pivote,temp,i,j;
    i=lb;
    j=ub;
    pivote=a[lb];
    while(i<j)
    {
        while(a[i]<=pivote)
            i++;
        while(a[j]>pivote)
            j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[lb];
    a[lb]=a[j];
    a[j]=temp;
    return j;
}
void quick1()
{
    int a[20],size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the %d elements\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,size-1);
    printf("Elements are:\n");
    for(i=0;i<size;i++)
        printf("%d\n",a[i]);
}
void merge(int arr[], int lb, int m, int ub)
{
     int i, j, k;
     int n1 = m - lb + 1;
     int n2 = ub - m;
     int L[n1], R[n2];
     for (i = 0; i < n1; i++)
         L[i] = arr[lb + i];
     for (j = 0; j < n2; j++)
         R[j] = arr[m + 1 + j];
     i = 0;
     j = 0;
     k = lb;
     while (i < n1 && j < n2)
     {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
     }
     while (i < n1)
     {
        arr[k] = L[i];
        i++;
        k++;
     }
     while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
     }
}
mergeMainFunction()
{
    int arr[10],arr_size,i;
    printf("Enter the size of array\n");
    scanf("%d",&arr_size);
    printf("Enter %d array elements\n",arr_size);
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is \n");
    for(i=0;i<arr_size;i++)
    {
         printf("%d\n",arr[i]);
    }
}

