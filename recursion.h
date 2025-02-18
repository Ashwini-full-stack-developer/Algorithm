long int factorialR(long int num)
{
    if(num==1)
        return 1;
    else
    {
        return num*factorialR(num-1);
    }
}
int SumOfNumbers(int num)
{
    if(num==1)
        return 1;
    else
    {
        return num+SumOfNumbers(num-1);
    }
}
void arrayReversal(int *a,int start,int end)
{
    int temp;
    if(start>=end)
        return ;
    else
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        arrayReversal(a,start+1,end-1);
    }

}
int SumDigit(int number)
{
    int sum=0;
    if(number==0)
        return 0;
    else
    {
         sum=(number%10+SumDigit(number/10));
         return sum;
    }
}
int CountDigit(int number)
{
    int count=0;
    if(number==0)
        return 0;
    else
    {
        count=1+CountDigit(number/10);
        return count;
    }
}
int Array_Sum(int *a,int size)
{
    int sum=0;
    if(size<=0)
        return 0;
    else
    {
        sum=a[size-1]+Array_Sum(a,size-1);
        return sum;
    }
}
int TowerOfHanoi(int n,char Form_rod,char to_rod,char Aux_rod)
{
    if(n==1)
    {
        printf("move the disk 1 from %c to %c\n",Form_rod,to_rod);
        return 0;
    }
    TowerOfHanoi(n-1,Form_rod,Aux_rod,to_rod);
    printf("move the disk %d from %c to %c\n",n,Form_rod,to_rod);
    TowerOfHanoi(n-1,Aux_rod,to_rod,Form_rod);
}
int binomial_coff(int n,int k)
{
    int x,y;
    if(k==0||k==n)
        return 1;
    else
    {
        x=binomial_coff(n-1,k-1);
        y=binomial_coff(n-1,k);
        return x+y;
    }

}
int fib_num(int num)
{
    int x,y;
    if(num<=1)
        return num;
    else
        x=fib_num(num-1);
        y=fib_num(num-2);
    return x+y;
}
void printNum1(int num)
{
    if(num<=10)
    {
        if(num%2!=0)
        {
            printf("Function 1:%d\n",num);
            num++;
            printNum2(num);
        }
    }
}
void printNum2(int num)
{
    if(num<=10)
    {
        if(num%2==0)
        {
            printf("Function 2:%d\n",num);
            num++;
            printNum1(num);
        }

    }
}
int rec_num(int *arr,int n)
{
    if(n==1)
        return arr[0];
    else
        return max_num(rec_num(arr,n-1),arr[n-1]);
}
int max_num(int n,int m)
{
    if(n>m)
        return n;
    else
        return m;
}
int GCD_Two_Num(int no1,int no2)
{
    if(no2!=0)
        return GCD_Two_Num(no2,no1%no2);
    else
        return no1;
}

