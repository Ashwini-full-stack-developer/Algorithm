void perfect()
{
     int i,num,sum=0;
     printf("Enter a number to check whether it's a perfect number or not:\n");
     scanf("%d",&num);
     for(i=1;i<=num/2;i++)
     {
        if(num%i==0)
            sum+=i;
     }
     if(sum==num&&sum>0)
        printf("%d is a perfect number.\n",num);
     else
        printf("%d is not a perfect number.\n",num);
}
void armstrong_Number()
{
    int sum,number,temp_Value,last_Term;
    printf("Enter an Integer Value To find whether it is an Armstrong Number Or Not:\n");
    scanf("%d",&number);
    temp_Value=number;
    while(number>0)
    {
        last_Term=number%10;
        sum+=(last_Term*last_Term*last_Term);
        number/=10;
    }
    if(temp_Value==sum)
        printf("%d Is An Armstrong number.\n",temp_Value);
    else
        printf("%d Is Not An Armstrong number.\n",temp_Value);
}
void pascal_Traingle()
{
    int row,x,y,co_Efficent,space;
    printf("Enter the number Of rows to print Pascal Triangle: ");
    scanf("%d",&row);
    for(x=1;x<=row;x++)
    {
        for(space=1;space<=row-x;space++)
            printf("  ");
        co_Efficent=1;
        for(y=1;y<=x;y++)
        {
            printf("%4d",co_Efficent);
            co_Efficent=co_Efficent*(x-y)/y;
        }
        printf("\n");
    }
}
void primeFactors()
{
  	int num,i=1,j,countP;
  	printf("Enter the number to find its prime factors:\n");
  	scanf("%d",&num);
  	printf("The prime factors of %d are:\n",num);
  	while(i<=num)
    {
        countP=0;
        if(num%i==0)
        {
            j=1;
            while(j<=i)
            {
                if(i%j==0)
                   countP++;
                j++;
            }
            if(countP==2)
                printf("%d\n",i);
        }
        i++;
    }
}
void factorial()
{
    int num,f=1,i;
    printf("Enter a number to find its factorial:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        f=f*i;
    printf("The factorial of %d is %d.\n",num,f);
}
void palindromeS()
{
    char a[40],i=0,j,val=0;
    printf("Enter a string\n");
    scanf("%s",&a);
    int length=strlen(a);
    while(a[i]!='\0')
    {
        if(a[i]!=a[length-1-i])
        val=1;break;
        i++;
    }
    if(val==1)
        printf("%s is not a palindrome.\n",a);
    else
        printf("%s is a palindrome.\n",a);
}
void frequency()
{
    char a[20],c;
    int countF=0;
    printf("Enter a string:\n");
    scanf("%s",&a);
    getchar();
    printf("Enter the character to know the number of repetitions:\n");
    scanf("%c",&c);
    for(int i=0;i<strlen(a);i++)
    {
        if(c==a[i])
            countF++;
    }
    printf("The number of repetitions of the character %c in the entered string %s is %d\n",c,a,countF);
}
void palindrome()
{
    int n,rev =0,rem,output;
    printf("Enter an integer: ");
    scanf("%d",&n);
    output= n;
    while (n!=0)
        {
            rem = n%10;
            rev = rev*10+rem;
            n/=10;
        }
    if (output== rev)
        printf("%d is a palindrome.\n",output);
    else
        printf("%d is not a palindrome.\n",output);
}
void fibonacci()
{
    int nT,t1=0,t2=1,num,i=0;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    printf("The Fibonacci series:\n");
    while(i<=num)
    {
        printf("%d\n",t1);
        nT=t1+t2;
        t1=t2;
        t2=nT;
        i++;
    }
}
void rangePrime()
{
    int m,n,i,dC;
    printf("Enter the lowest and highest range to print prime numbers B/W them:\n");
    scanf("%d%d",&m,&n);
    printf("The prime numbers B/W the range from %d to %d are as follow:\n",m,n);
    for(i=m+1;i<n;i++)
    {
        dC=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
                dC++;
        }
        if(dC==2)
            printf("%d\n",i);
    }
}
void sumOfDigits()
{
    int s=0,i,rem,rev=0;
    long int n;
    printf("Enter a number to find the sum of its digits:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        rem = n%10;
        s+=rem;
        rev = rev*10+rem;
        n/=10;
    }
    printf("The sum of the digits of the entered number is %d.\n",s);
}
void table()
{
    int num,n,i,t;
    printf("Enter a number for its table:\n");
    scanf("%d",&num);
    printf("Enter a number the table has to end starting from 1:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=num*i;
        printf("%d * %d = %d\n",num,i,t);
    }
}
void stringL()
{
    int i=0;
    char a[30];
    printf("Enter a string to find its length: ");
    scanf("%s",a);
    while(a[i]!='\0')
       i++;
    printf("\nThe length of the string %s is %d.\n",a,i);
}
void stringR()
{
    int i;
    char a[30];
    printf("Enter a string to reverse its order:");
    gets(a);
    printf("The reversed order of the string %s is ",a);
    for(i=(strlen(a)-1);i>=0;i--)
        printf("%c",a[i]);
    printf("\n");
}
void stringConc()
{
    int i,j;
    char a[30],b[30],c[30];
    printf("Enter any two strings to concatenate:\n");
    scanf("%s%s",a,b);
    for(i=0;i<strlen(a);i++)
        c[i]=a[i];
    for(j=0;j<(strlen(b));j++)
    {
        c[i]=b[j];
        i++;
    }
    printf("Concatenation of the strings %s and %s is %s.\n",a,b,c);
}
void stringSwap()
{
    int i=0,j=0,k=0;
    char a[30],b[30],c[30];
    printf("Enter any two strings to swap:\n");
    scanf("%s%s",&a,&b);
    printf("Strings before swapping\nA:%s and B:%s\n",a,b);
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    c[i]='\0';
    while(b[j]!='\0')
    {
        a[j]=b[j];
        j++;
    }
    a[j]='\0';
    while(c[k]!='\0')
    {
        b[k]=c[k];
        k++;
    }
    b[k]='\0';
    printf("Strings after swapping\nA:%s and B:%s\n",a,b);
}
void stringCmp()
{
    int i=0,j=0,sCount=0,sCount1=0,sCount2=0;
    char a[30],b[30];
    printf("Enter two string for comparison:\n");
    scanf("%s%s",a,b);
    while(a[sCount1]!='\0')
        sCount1++;
    while(b[sCount2]!='\0')
        sCount2++;
    if(sCount1!=sCount2)
        printf("The entered two strings are neither equivalent nor equal.\n");
    else
    {
        for(i=0;i<sCount1;i++)
        {
            if(a[i]==b[i])
                sCount++;
        }
        if(sCount==sCount1)
            printf("The entered two strings are equal.\n");
        else
            printf("The entered two strings are equivalent but not equal.\n");
    }

}

