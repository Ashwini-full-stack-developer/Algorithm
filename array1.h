
// Array Sum and Average

void sumAndAverageOfArray()
{
    int a[22],size,x,sum=0,average=0;
    printf("Enter The Size Of Array To Find Sum And Average Of It:");
    scanf("%d",&size);
    printf("Enter %d Array Elements\n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("Entered Array Elements :\n");
    for(x=0;x<size;x++)
    {
        printf("%d\n",a[x]);
        sum+=a[x];
    }
    average=sum/size;
    printf("Sum Of The Array : %d\nAverage Of The Array:%d\n",sum,average);
}

// Array Element Search

void arrayElementSearch()
{
    int a[22],size,x,sum=0,average=0,searchElement,count=0;
    printf("Enter The Size Of Array :");
    scanf("%d",&size);
    printf("Enter %d Array Elements\n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("Enter The Element To Search:");
    scanf("%d",&searchElement);
    printf("Entered Array Elements :\n");
    for(x=0;x<size;x++)
    {
        if(searchElement==a[x])
            count=x+1;
        printf("%d\n",a[x]);
    }
    if(count!=0)
        printf("Searched Element %d Found At %d Index\n\n",searchElement,count);
    else
        printf("Element Is Not Found In The Given Array\n\n");
}


//Matrix Multiplication

void matrixMultiplication()
{
    int a[22][22],b[22][22],rowASize,colASize,rowBSize,colBSize,x,y,z,multi[22][22];
    printf("Enter The Row And Column Size Of First Matrix\n");
    scanf("%d%d",&rowASize,&colASize);
    printf("Enter %d Array Elements\n",(rowASize*colASize));
    for(x=0;x<rowASize;x++)
    {
        for(y=0;y<colASize;y++)
            scanf("%d",&a[x][y]);
    }
    printf("Enter The Row And Column Size Of Second Matrix\n");
    scanf("%d%d",&rowBSize,&colBSize);
    printf("Enter %d Array Elements\n",(rowBSize*colBSize));
    for(x=0;x<rowBSize;x++)
    {
        for(y=0;y<colBSize;y++)
            scanf("%d",&b[x][y]);
    }
    if(colASize!=rowBSize)
    {
        printf("Can't Multiply The Matrix Enter The Valid Row And Column Size !\n\n");
        return;
    }
    else
    {
        for(x=0;x<rowBSize;x++)
        {
            for(y=0;y<colASize;y++)
            {
                multi[x][y]=0;
                for(z=0;z<colBSize;z++)
                    multi[x][y]+=a[x][y]*b[x][y];
            }
        }
        printf("Multiply Of Two Entered Matrix : \n");
        for(x=0;x<rowBSize;x++)
        {
            for(y=0;y<colBSize;y++)
                printf("%d\t",multi[x][y]);
            printf("\n");
        }
    }
}



// Matrix transposeOfMatrix


void matrixTranspose()
{
    int a[22][22],x,y,rowSize,colSize,b[22][22];
    printf("Enter The Row And Column Size Of Matrix\n");
    scanf("%d%d",&rowSize,&colSize);
    printf("Enter %d Array Elements\n",(rowSize*colSize));
    for(x=0;x<rowSize;x++)
    {
        for(y=0;y<colSize;y++)
            scanf("%d",&a[x][y]);
    }
    for(x=0;x<rowSize;x++)
    {
        for(y=0;y<colSize;y++)
            b[x][y]=a[y][x];
    }
    printf("Transpose Of Matrix\n");
    for(x=0;x<rowSize;x++)
    {
        for(y=0;y<colSize;y++)
            printf("%d\t",b[x][y]);
        printf("\n");
    }
}


//Remove Duplicate Array Elements


void removeDuplicateElements()
{
    int a[22],size,x,y,temp,z;
    printf("Enter The Size Of Array : ");
    scanf("%d",&size);
    printf("Enter %d Elements : \n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    for(x=0;x<size;x++)
    {
        for(y=x+1;y<size;y++)
        {
            if(a[x]==a[y])
            {
                for(z=y;z<size-1;z++)
                    a[z]=a[z+1];
                size--;
                y--;
            }
        }
    }
    printf("Array After Removing Duplicate Elements \n");
    for(x=0;x<size;x++)
        printf("%d\n",a[x]);
}


// Addition Of Two Matrix

void matrixAddition()
{
    int arr[22][22],arrB[22][22],rowA,colA,rowB,colB,sum[22][22],x,y;
    printf("Enter The Row And Column Size Of First Matrix : ");
    scanf("%d%d",&rowA,&colA);
    printf("Enter %d Array Elements : \n",(rowA*colA));
    for(x=0;x<rowA;x++)
    {
        for(y=0;y<colA;y++)
            scanf("%d",&arr[x][y]);
    }
    printf("Enter The Row And Column Size Of Second Matrix : ");
    scanf("%d%d",&rowB,&colB);
    printf("Enter %d Array Elements : \n",(rowB*colB));
    for(x=0;x<rowB;x++)
    {
        for(y=0;y<colB;y++)
            scanf("%d",&arrB[x][y]);
    }
    printf("Sum Of The Matrix : \n");
    for(x=0;x<colA;x++)
    {
        for(y=0;y<rowB;y++)
            sum[x][y]=arr[x][y]+arrB[x][y];
    }
    for(x=0;x<rowA;x++)
    {
        for(y=0;y<colB;y++)
            printf("%d\t",sum[x][y]);
        printf("\n");
    }
}



//Array Intersection - Common Elements

void arrayIntersection()
{
    int a[22],b[22],size,size2,x,y,count=0;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&size);
    printf("Enter %d Array Elements \n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("Enter The Size Of The Second Array : ");
    scanf("%d",&size2);
    printf("Enter %d Array Elements \n",size2);
    for(x=0;x<size2;x++)
        scanf("%d",&b[x]);
    printf("Array Elements : \n\n");
    printf("Array A : ");
    for(x=0;x<size;x++)
        printf(" %d",a[x]);
    printf("\nArray B : ");
    for(x=0;x<size2;x++)
        printf(" %d",b[x]);
    printf("\nCommon Elements: ");
    for(x=0;x<size;x++)
    {
        for(y=0;y<size2;y++)
        {
            if(a[x]==b[y])
            {
                printf(" %d",a[x]);
                count++;
            }
        }
    }
    if(count==0)
        printf(" No Elements Are Common In Both Array");
    printf("\n\n");
}

// Union Of Array

void arrayUnion()
{
    int a[22],b[22],size,x,y,cun=0,c[22],z=0;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&size);
    printf("Enter %d Array Elements \n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("Enter %d Array Elements For Second Array\n",size);
    for(x=0;x<size;x++)
        scanf("%d",&b[x]);
    printf("Array Elements : \n\n");
    printf("Array A : ");
    for(x=0;x<size;x++)
    {
        printf(" %d",a[x]);
        c[z]=a[x];
        z++;
    }
    printf("\nArray B : ");
    for(x=0;x<size;x++)
    {
        printf(" %d",b[x]);
        c[z]=b[x];
        z++;
    }
    size+=size;
    printf("\nUnion Of The Array : ");
    for(x=0;x<size;x++)
    {
        for(y=x+1;y<size;y++)
        {
            if(c[x]==c[y])
            {
                for(z=y;z<size-1;z++)
                {
                    c[z]=c[z+1];
                    cun++;
                }
                size--;
                y--;
            }
        }
    }
    if(cun==0)
    {
        printf("All The Elements Are Different\n");
    }
    for(x=0;x<size;x++)
    {
        printf("%d ",c[x]);
    }
    printf("\n\n");
}



//Array Rotation

void arrayRotation()
{
    int choice,a[22],size,x;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&size);
    printf("Enter %d Array Elements \n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("\t\n1.Right Rotation\t\n2.Left Rotation\n\n");
    while(1)
    {
        printf("Enter The Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:rightArrayRotation(a,size);break;
            case 2:leftArrayRotation(a,size);break;
            case 3:break;
            default:printf("Enter The Valid Choice \n\n");
        }
    }
}

void rightArrayRotation(int d[],int rsize)
{
    int rRoatate,x,tempVar,y;
    printf("Enter How Many Elements You Want Move For Left Rotation : ");
    scanf("%d",&rRoatate);
    for(x=0;x<rRoatate;x++)
    {
        tempVar=d[rsize-1];
        for(y=rsize-1;y>0;y--)
            d[y]=d[y-1];
        d[0]=tempVar;
    }

    printf("Array After Right Shift : ");
    for(x=0;x<rsize;x++)
        printf(" %d ",d[x]);
    printf("\n\n");
}

void leftArrayRotation(int p[],int lsize)
{
    int lRoatate,x,tempVar,y;
    printf("Enter How Many Elements You Want Move For Left Rotation : ");
    scanf("%d",&lRoatate);
    for(x=0;x<lRoatate;x++)
    {
        tempVar=p[0];
        for(y=0;y<lsize-1;y++)
            p[y]=p[y+1];
        p[y]=tempVar;
    }

    printf("Array After Left Shift : ");
    for(x=0;x<lsize;x++)
        printf(" %d ",p[x]);
    printf("\n\n");
}

//Check Array Is Palindrome Or Not


void arrayPalindrome()
{
    int choice,a[22],size,x,y,check=0;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&size);
    printf("Enter %d Array Elements \n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    for(x=0;x<size/2;x++)
    {
        for(y=size-1;y>=size/2;y--)
        {
            if(a[x]==a[y])
                check=1;
        }
    }
    if(check!=0)
        printf("Array Is Palindrome\n\n");
    else
        printf("Array Is Not Palindrome\n\n");
}


//Matrix Diagonal sum


void matrixDiagonalSum()
{
    int row,col,a[22][22],x,y,sum;
    printf("Enter The Size Of Matrix\n");
    printf("Row Size : ");
    scanf("%d",&row);
    printf("Column Size : ");
    scanf("%d",&col);
    printf("Enter %d Elements \n",row*col);
    for(x=0;x<row;x++)
    {
        for(y=0;y<col;y++)
            scanf("%d",&a[x][y]);
    }
    if(row!=col)
    {
        printf("Can't Add Diagonal Elements When Row And Column Size Is Not Equal\n\n");
        return;
    }
    else
    {
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
            {
                if(x==y)
                    sum+=a[x][y];
            }
        }
        printf("Matrix Elements\n");
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
                printf(" %d ",a[x][y]);
            printf("\n");
        }
        printf("Diagonal Elements Sum : %d\n\n",sum);
    }
}

//Symmetric Matrix

void checkSymmetricMatrix()
{
    int row,col,a[22][22],x,y,sum,b[22][22],check;
    printf("Enter The Size ( Row And Column Size) Of Matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter %d Elements \n",row*col);
    for(x=0;x<row;x++)
    {
        for(y=0;y<col;y++)
            scanf("%d",&a[x][y]);
    }
    if(row==col)
    {
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
                b[y][x]=a[x][y];
        }
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
            {
                if(a[x][y]!=b[x][y])
                    check=1;
            }
        }
        printf("Entered Matrix :\n");
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
                printf(" %d ",a[x][y]);
            printf("\n");
        }
        printf("Transpose Matrix :\n");
        for(x=0;x<row;x++)
        {
            for(y=0;y<col;y++)
                printf(" %d ",b[x][y]);
            printf("\n");
        }
        if(check!=1)
            printf("It Is Symmetric Matrix\n\n");
        else
            printf("It Is Not A Symmetric Matrix\n\n");
    }
    else
        printf("Can't Find Out Symmetric Matrix With Different Row And Column Size\n\n");
}


//Array Element Repetition Count


void arrayRepetationCount()
{
    int a[22],size,count,x,temp,y;
    printf("Enter The Array Size : ");
    scanf("%d",&size);
    printf("Enter %d Array Elements\n",size);
    for(x=0;x<size;x++)
        scanf("%d",&a[x]);
    printf("Repeated Elements : \n");
    for(x=0;x<size;x++)
    {
        count=0;
        for(y=x+1;y<size;y++)
        {
            if(a[y]==a[x])
                count++;
        }
        if(count!=0)
            printf(" %d = %d Times\n",a[x],count+1);
    }
    printf("\n\n");
}


// Rearrange Array Elements ( positive & Negative )

void rearrangeArrayElements()
{
    int a[22],rsize,x,y,temp;
    printf("Enter The Array Size : ");
    scanf("%d",&rsize);
    printf("Enter %d Array Elements\n",rsize);
    for(x=0;x<rsize;x++)
        scanf("%d",&a[x]);
     printf("Array Elements  Before Rearranging : ");
    for(x=0;x<rsize;x++)
        printf(" %d ",a[x]);
    for(x=0;x<rsize;x++)
    {
        for(y=x+1;y<rsize;y++)
        {
           if(a[x]>a[y])
           {
               temp=a[x];
               a[x]=a[y];
               a[y]=temp;
           }
        }
    }
    printf("\nArray Elements After Rearranging : ");
    for(x=0;x<rsize;x++)
        printf(" %d ",a[x]);
    printf("\n");
}
