void linearSearch()
{
    int search,n,a[40];
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search:\n");
    scanf("%d",&search);
    int i,flag=0;
    for(i=0; i<n; i++)
    {
        if(search==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element is present at %d position\n",i+1);
    }
    else
    {
        printf("Element not found\n");
    }
}
int binarysearch1()
{
    int a[10],i,size,x;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter the array elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to scearch\n");
    scanf("%d",&x);
    int result=binarysearch(a,0,size-1,x);
    (result==-1)
    ?printf("the element is not present\n")
    :printf("the element is present\n");
    return 0;


}
int binarysearch(int a[],int l,int r,int x)
{


    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return binarysearch(a,l,mid-1,x);
        return binarysearch(a,mid+1,r,x);
    }
    return -1;
}
void linearSearch2d()
{
    int search,flag=0,i,j,m,n,a[40][40];
    printf("Enter the row size and column size of the array:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the %d elements:\n",(m*n));
    for(int i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the search element:\n");
    scanf("%d",&search);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]==search)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element not found\n");
    }
}
int binarySearch2d()
{
    int search,flag=0,i,j,n,a[40][40],rowsize,colsize;
    printf("Enter the row size and column size of an array\n");
    scanf("%d%d",&rowsize,&colsize);
    printf("Enter the %d elements:\n",(rowsize*colsize));
    for(int i=0;i<rowsize; i++)
    {
        for(j=0; j<colsize; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&search);
    int start = 0;
    int mid, row, col, value;
    int end = rowsize * colsize - 1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        row = mid / colsize;
        col = mid % colsize;
        value = a[row][col];

        if (value == search)
        {


            flag=1;
            break;
        }
        if (value > search)
            end = mid - 1;
        else
            start = mid + 1;
    }


    if(flag==1)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }
}
void occurences()
{
    int search,n,a[40];
      printf("Enter the size\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&search);
    int i,first=-1,last=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            if(first==-1)
                first=i;
              last=i;
            flag=1;
        }

    }
    if(flag==1)
    {


        printf("First occurence:%d\n",first);
        printf("Second occurence %d\n",last);
    }
    else
    {


        printf("Element not found\n");
    }
}
void missingNumber()
{
    int search,n,a[40];
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the %d consecutive elements missing a number:\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int i,stotal, total=0;
    stotal = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
    {

        total =total+ a[i];
    }

    printf("Missing element is :%d\n",(stotal-total));
}
