void equal1()
{
    int num1,num2;
    printf("Enter the two numbers for equality check:\n");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
        printf("number 1 and number 2 are equal.\n");
    else
        printf("number 1 and number 2 are not equal.\n");
}
void evenOdd()
{
    int num1,rem1;
    printf("Enter a number to check whether it's even or odd:\n");
    scanf("%d",&num1);
    if(num1%2==0)
        printf("%d is an even number.\n");
    else
        printf("%d is an odd number.\n");
}
void positiveNegative()
{

    int num;
    printf("Enter a number to check whether it's Positive or Negative\n");
    scanf("%d",&num);
    num>=0? printf("%d is a Positive number.\n"):printf("%d is a Negative number.\n");
}
void largest()
{
    int num1,num2,num3;
    printf("Enter 3 numbers to find the largest:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
        printf("%d is largest.\n",num1);
    else if((num2>num1)&&(num2>num3))
        printf("%d is largest.\n",num2);
    else
        printf("%d is largest.\n",num3);
}
void leapYear()
{
    int y;
    printf("Enter a year to check whether it's a leap year or not:\n");
    scanf("%d",&y);
    if( (y%400 == 0) || (y%4 == 0 ))
        printf("The entered year %d is a leap year.\n",y);
    else
        printf("The entered year %d is not a leap year.\n",y);
}
void checkCharacter()
{
    char v;
    getchar();
    printf("Enter a Character:  ");
    scanf("%c",&v);
    if(v>='A'&&v<='Z')
        printf("The character is upper case\n");
    else if(v>='a'&&v<='z')
        printf("The character is lower case\n ");
    else if(v>='0'&&v<='9')
        printf("The character is digit\n");
    else
         printf("The character is special\n");
}
void calculator()
    {
        int num1,num2,Result;
        printf("Enter the First number for arithmetic operation:");
        scanf("%d",&num1);
        printf("Enter the Second number for arithmetic operation:");
        scanf("%d",&num2);
        printf("Choose the option:\n");
        printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n ");
        scanf("%d",&Result);
        printf("\n The result is:\n");
        switch(Result)
        {
            case 1:printf("The Addition is %d and %d is %d\n",num1,num2,(num1+num2));break;
            case 2:printf("The Subtraction is %d and %d is %d\n",num1,num2,(num1-num2));break;
            case 3:printf("The Multiplication is %d and %d is %d\n",num1,num2,(num1*num2));break;
            case 4:printf("The Division is %d and %d is %d\n",num1,num2,(num1/num2));break;
            default:("Incorrect option\n");printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n ");
                    scanf("%d",&Result);
        }

}
void grading()
{
    float sub1, sub2, sub3;
    float total, average;
    char grade;
    printf("Enter the marks of three subjects to find grade:\n");
    scanf("%f%f%f", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3.0;
    if (average >=60)
        printf("grade = A 'Excellent'\n");
    else if (average >= 50 && average < 90)
       printf("grade = B 'First class'\n") ;
    else if (average >= 40 && average < 80)
        printf("grade = C 'Second class'\n");
    else if(average >= 30 && average < 80)
        printf("grade = D 'Just Pass'\n");
    else
        printf("grade = E 'Fail'\n");
}
void voteEligibility()
{
    int vote_age;
    printf("Enter the age of the candidate to know whether he/she is eligible to cast his vote or not:\n ");
    scanf("%d",&vote_age);
    if (vote_age<18)
       printf("Sorry, You are not eligible to cast your vote.\n");
    else
        printf("Congratulations!!!! You are eligible to cast your vote.\n");
}
void temperature()
{
    float fh,cl;
    int choice;
    printf("1.Fahrenheit to Celsius.\n2.Celsius to Fahrenheit.\n");
    printf("Enter your choice (1,2):\n ");
    scanf("%d",&choice);
    if(choice ==1)
    {
        printf("Enter temperature in Fahrenheit:\n ");
        scanf("%f",&fh);
        cl= (fh - 32) *5/9;
        printf("Temperature in Celsius: %.2f",cl);
    }
    else if(choice==2)
    {
        printf("Enter temperature in Celsius:\n ");
        scanf("%f",&cl);
        fh= (cl*5/9)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
    else
        printf("Invalid Choice !!!\n");
}
void vowelConsonant()
{
    char ch;
    getchar();
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("The given character is vowel\n ");break;
        default:
            printf("The given character is consonant\n");
    }
}
void incomeTax()
{
    float salary, tax = 0;
    printf("Enter the basic salary:\n ");
    scanf("%f", &salary);
    if (salary >= 100000)
        tax = salary * 15/100;
    else if (salary >= 60000)
        tax = salary * 6/100;
    else if (salary >= 25000)
        tax = salary * 2/100;
    printf("Tax calculated: %0.2f\n", tax);
}
void simpleInterest()
{
    float principle, time, rate, SI;
    printf("Enter principle amount:\n ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%f", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    if (principle >= 0 && time >= 0 && rate >= 0)
    {
        SI = (principle * time * rate) / 100;
        printf("Simple Interest is: = %f\n", SI);
    }
    else
        printf("Invalid input\n");
}
void primeNumber()
{
    int n, i, flag = 0;
    printf("Enter any number to find whether it's prime or not:\n ");
    scanf("%d", &n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if((flag==1))
        printf("It is not a prime number.\n");
    else if(flag==0)
        printf("It is a prime number.\n");
}
void monthDays()
{
    int month;
    printf("Enter the Month Number 1 to 12 (Consider 1 = January, and 12 = December):\n");
    scanf("%d", &month);
    switch(month )
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days in this Month\n");
            break;
        case 2:
            printf("Either 28 or 29 Days in this Month\n");
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days in this Month\n");
            break;
        default:
            printf("Invalid Number\n ");
    }
}
