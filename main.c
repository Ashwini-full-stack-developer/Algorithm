#include<stdio.h>
#include"loopsss.h"
#include"CS.h"
#include"array1.h"
#include"Stack.h"
#include"recursion.h"
#include"sorting.h"
#include"searching1.h"
#include"quiz.h"
#include"unitConversion.h"
int main()
{
    int option;
    system("COLOR 0F");
    system("COLOR 01");
    printf("3");sleep(1);system("cls");
    system("COLOR 0F");
    system("COLOR 02");
    printf("           2");sleep(1);system("cls");
    system("COLOR 0F");
    system("COLOR 03");
    printf("                     1");sleep(1);system("cls");
    printf("\033[5;33m\t\t\t\t\t\tNAMASTE NERDS\033[0m\n");
    u:
    printf("1.Loop Programs\n\n");
    printf("2.Conditional Statement Programs\n\n");
    printf("3.Array Programs\n\n");
    printf("4.Stack Program\n\n");
    printf("5.Recursion programs\n\n");
    printf("6.Sorting programs\n\n");
    printf("7.Searching programs\n\n");
    printf("8.Quiz\n\n");
    printf("9.Unit Converter\n\n");
    printf("10.Exit the program.\n\n");
    printf("Enter a choice to view the programs of that respective topic:\n");
    scanf("%d",&option);
    system("cls");
    switch(option)
    {
    case 1:
    {
        int a;
        f1:
        system("cls");
        printf("1.Loop Programs\n\n");
        printf("1.Perfect Number\n2.Armstrong Number\n3.Pascal Traingle\n4.Prime Factors\n5.Factorial\n6.Palindrome of a number\n7.Palindrome of a string\n8.Frequency of a character\n9.Fibonacci series\n10.Prime numbers in range\n11.Sum of Digits\n12.Tables of a number\n13.String length\n14.String concatenation\n15.Strings Swap\n16.Strings comparison\n17.To Programs List\n");
        printf("Choose the option:\n");
        scanf("%d",&a);
        system("cls");
        switch(a)
        {
        case 1:
        {
            perfect();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 2:
        {
            armstrong_Number();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 3:
        {
            pascal_Traingle();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 4:
        {
            primeFactors();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 5:
        {
            factorial();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 6:
        {
            palindrome();
            getchar();
            getchar();
            goto f1;
            break;
        }

        case 7:
        {
            palindromeS();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 8:
        {
            frequency();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 9:
        {
            fibonacci();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 10:
        {
            rangePrime();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 11:
        {
            sumOfDigits();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 12:
        {
            table();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 13:
        {
            stringL();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 14:
        {
            stringConc();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 15:
        {
            stringSwap();
            getchar();
            getchar();
            goto f1;
            break;
        }

        case 16:
        {
            stringCmp();
            getchar();
            getchar();
            goto f1;
            break;
        }
        case 17:
            goto u;
            break;
        default:
            printf("Enter Valid Choice:\n");
            goto f1;

        }
    }
    case 2:
    {
        int b;
        f2:
        system("cls");
        printf("2.Conditional Statement Programs\n\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("1.Equality check of a number:\n2.Even odd check:\n3.Positive Negative check:\n4.Greatest of three num:\n5.Leap year checker:\n6.character check:\n7.Calculator:\n8.Grading:\n9.Vote Eligibility check:\n");
        printf("10.Temperature check:\n11.Vowel or Consonant check:\n12.Income Tax Finder:\n13.Simple Interest Finder:\n14.Prime number check:\n15.Number of Days in Month Finder\n16.To Program List\n\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("Enter the choice\n");
        scanf("%d",&b);
        printf(".......................................................................................\n");
        system("cls");
        switch(b)
        {

        case 1:
            equal1();
            getchar();
            getchar();
            goto f2;
            break;
        case 2:
            evenOdd();
            getchar();
            getchar();
            goto f2;
            break;
        case 3:
            positiveNegative();
            getchar();
            getchar();
            goto f2;
            break;
        case 4:
            largest();
            getchar();
            getchar();
            goto f2;
            break;
        case 5:
            leapYear();
            getchar();
            getchar();
            goto f2;
            break;
        case 6:
            checkCharacter();
            getchar();
            getchar();
            goto f2;
            break;
        case 7:
            calculator();
            getchar();
            getchar();
            goto f2;
            break;
        case 8:
            grading();
            getchar();
            getchar();
            goto f2;
            break;
        case 9:
            voteEligibility();
            getchar();
            getchar();
            goto f2;
            break;
        case 10:
            temperature();
            getchar();
            getchar();
            goto f2;
            break;
        case 11:
            vowelConsonant();
            getchar();
            getchar();
            goto f2;
            break;
        case 12:
            incomeTax();
            getchar();
            getchar();
            goto f2;
            break;
        case 13:
            simpleInterest();
            getchar();
            getchar();
            goto f2;
            break;
        case 14:
            primeNumber();
            getchar();
            getchar();
            goto f2;
            break;
         case 15:
            monthDays();
            sleep(4);
            goto f2;
            break;
        case 16:
            goto u;
            break;
        default:
            printf("Please enter the valid choice\n");
            goto f2;
        }
    }
    case 3:
    {
        int c;
        f3:
        system("cls");
        printf("3.Array Programs\n\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("1.Addition Of Two Matrix\n2.Sum and Average of Array\n3.Array Element Search\n4.Matrix Multiplication\n5.Transpose Of Matrix\n6.Remove Duplicate Array Elements\n7.Array Intersection - Common Elements\n");
        printf("8.Union Of Array\n9.Array Rotation\n10.Check Array Is Palindrome Or Not\n11.Matrix Diagonal sum\n12.Symmetric Matrix\n13.Array Element Repetition Count\n14.Rearrange Array Elements ( positive & Negative )\n15.To Program List");
        printf("\n--------------------------------------------------------------------------------------\n");
        printf("Enter the choice \n");
        scanf("%d",&c);
        printf(".......................................................................................\n");
        system("cls");
        switch(c)
        {
        case 1:
            matrixAddition();
            getchar();
            getchar();
            goto f3;
            break;
        case 2:
            sumAndAverageOfArray();
            sleep(10);
            goto f3;
            break;
        case 3:
            arrayElementSearch();
            getchar();
            getchar();
            goto f3;
            break;
        case 4:
            matrixMultiplication();
            getchar();
            getchar();
            goto f3;
            break;
        case 5:
            matrixTranspose();
            getchar();
            getchar();
            goto f3;
            break;
        case 6:
            removeDuplicateElements();
            getchar();
            getchar();
            goto f3;
            break;
        case 7:
            arrayIntersection();
            getchar();
            getchar();
            goto f3;
            break;
        case 8:
            arrayUnion();
            getchar();
            getchar();
            goto f3;
            break;
        case 9:
            arrayRotation();
            getchar();
            getchar();
            goto f3;
            break;
        case 10:
            arrayPalindrome();
            getchar();
            getchar();
            goto f3;
            break;
        case 11:
            matrixDiagonalSum();
            getchar();
            getchar();
            goto f3;
            break;
        case 12:
            checkSymmetricMatrix();
            getchar();
            getchar();
            goto f3;
            break;
        case 13:
            arrayRepetationCount();
            getchar();
            getchar();
            goto f3;
            break;
        case 14:
            rearrangeArrayElements();
            getchar();
            getchar();
            goto f3;
            break;
        case 15:
            goto u;
            break;
        default:
            printf("Enter the valid choice\n");
            goto f3;
        }


    }
    case 4:
    {
        int d;
        f4:
        system("cls");
        printf("4.Stack Program\n\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("Basic Stack Demonstration\n");
        printf("--------------------------------------------------------------------------------------\n");
        printf("Enter the choice \n");
        scanf("%d",&d);
        system("cls");
        switch(d)
        {
        case 1:
            stackDemo();
            getchar();
            getchar();
            goto u;
            break;
        case 2:
            goto u;
            break;
        default:
            printf("Enter the valid choice\n");
            goto f4;
        }
    }
    case 5:
    {
        int e;
        f5:
        system("cls");
        printf("5.Recursion programs\n\n");
        printf("1.Factorial \n\n2.Sum in the range of entered number starting from 1\n\n3.Array Reversal\n\n4.Sum of the Digits\n\n5.Digits Count\n\n6.Array Elements Sum\n\n7.Tower Of Hanoi\n\n8.Binomial Co-efficient\n\n9.Fibonacci Series\n\n10.Printing of Numbers\n\n11.Greatest Number\n\n12.GCD\n\n13.To Program List\n\n");
        printf("Choose the option:\n");
        scanf("%d",&e);
        system("cls");
        switch(e)
        {

        case 1:
        {
            int num;
            printf("Enter the number to find its factorial:\n");
            scanf("%d",&num);
            printf("The factorial of the given number is %d\n",factorialR(num));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 2:
        {
            long int num;
            printf("Enter the  number\n");
            scanf("%d",&num);
            printf("The sum of the numbers is %d\n",SumOfNumbers(num));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 3:
        {
            int a[10],size,i;
            printf("Enter the size of the array\n");
            scanf("%d",&size);
            printf("Enter the array elements\n");
            for(i=0; i<size; i++)
            {
                scanf("%d",&a[i]);
            }
            arrayReversal(a,0,size-1);
            printf("The reversed array elements are\n");
            for(i=0; i<size; i++)
            {
                printf("%d\n",a[i]);
            }
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 4:
        {
            int number;
            printf("Enter the number to sum from (0 to Entered Number)\n");
            scanf("%d",&number);
            printf("The sum of digits in the number is %d\n",SumDigit(number));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 5:
        {
            int number;
            printf("Enter the Integer (Digit Count) :\n");
            scanf("%d",&number);
            printf("There are %d digits in the entered number\n",CountDigit(number));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 6:
        {

            int a[10],size,i;
            printf("Enter the array Size \n");
            scanf("%d",&size);
            printf("Enter the array elements\n");
            for(i=0; i<size; i++)
            {
                scanf("%d",&a[i]);
            }
            printf("The sum of the array element is %d\n",Array_Sum(a,size));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 7:
        {

            int n;
            printf("Enter the number you want (To Perform Tower Of Hanoi) \n");
            scanf("%d",&n);
            TowerOfHanoi(n,'A','C','B');
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 8:
        {
            int n,k;
            printf("Enter the value of n and k (To Find Binomial Coefficient larger value first and then the smaller one):\n");
            scanf("%d%d",&n,&k);
            printf("The binomial co-effecient of %d and %d is %d\n",n,k,binomial_coff(n,k));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 9:
        {

            int num;
            printf("Enter the Fibonacci numbers position you want\n");
            scanf("%d",&num);
            printf("The %d position of Fibonacci series contain %d\n",num,fib_num(num));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 10:
        {
            int num=1;
            printf("Printing the elements by using 2 functions alternately\n");
            printNum1(num);
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 11:
        {
            int a[22],size,x;
            printf("Enter The Array Size : ");
            scanf("%d",&size);
            printf("Enter %d Array Elements\n",size);
            for(x=0; x<size; x++)
                scanf("%d",&a[x]);
            int max=rec_num(a,size);
            printf("The maximum number in the array is %d\n",max);
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 12:
        {
            int no1,no2;
            printf("Enter the value of 2 numbers\n");
            scanf("%d%d",&no1,&no2);
            printf("The GCD of (%d,%d) is %d\n",no1,no2,GCD_Two_Num(no1,no2));
            getchar();
            getchar();
            goto f5;
            break;
        }
        case 13:
            goto u;
            break;
        default:
            printf("Enter The Valid Choice\n");
            goto f5;
        }
        goto u;
    }
    case 6:
    {
        int f;
        f6:
        system("cls");
        printf("6.Sorting programs\n\n");
        printf("1.Bubblesort\n2.Insertion sort\n3.Selection sort\n4.Quick sort\n5.Merge Sort\n6.To Program List\n");
        printf("Enter the choice\n");
        scanf("%d",&f);
        system("cls");
        switch(f)
        {

        case 1:
            Bubblesort();
            getchar();
            getchar();
            goto f6;
            break;
        case 2:
            Insertionsort();
            getchar();
            getchar();
            goto f6;
            break;
        case 3:
            Selectionsort();
            getchar();
            getchar();
            goto f6;
            break;
        case 4:
            quick1();
            getchar();
            getchar();
            goto f6;
            break;
        case 5:
            mergeMainFunction();
            getchar();
            getchar();
            goto f6;
            break;
        case 6:
            goto u;
            break;
        default:
            printf("Enter The Valid Choice\n");
            goto f6;
        }

    }
    case 7:
    {
        int g;
        f7:
        system("cls");
        printf("7.Searching programs\n\n");
        printf("1.Linear search\n2.Binary search\n3.Linear2darray\n4.Binary2darray\n5.Occurences\n6.Missing number\n7.To Program List\n\n");
        printf("Enter the choice\n");
        scanf("%d",&g);
        system("cls");
        switch(g)
        {
        case 1:
            linearSearch();
            getchar();
            getchar();
            goto f7;
            break;
        case 2:
            binarysearch1();
            getchar();
            getchar();
            goto f7;
            break;
        case 3:
            linearSearch2d();
            getchar();
            getchar();
            goto f7;
            break;
        case 4:
            binarySearch2d();
            getchar();
            getchar();
            goto f7;
            break;
        case 5:
            occurences();
            getchar();
            getchar();
            goto f7;
            break;
        case 6:
            missingNumber();
            getchar();
            getchar();
            goto f7;
            break;
        case 7:
            goto u;
            break;
        default:
            printf("Enter the valid choice\n");
            goto f7;
        }
        case 8:
        {
            system("COLOR 0F");
            system("COLOR 01");
            printf("        3");sleep(1);system("cls");
            system("COLOR 0F");
            system("COLOR 02");
            printf("            2");sleep(1);system("cls");
            system("COLOR 0F");
            system("COLOR 03");
            printf("                1");sleep(1);system("cls");
            system("COLOR 02");printf("\t\t\t\tNamaste Nerds\n");sleep(2);system("cls");
            quizQuestionsAndAnswers();goto u;break;
        }
        case 9:conversion();goto u;break;
        case 10:
        {
            system("cls");
            system("COLOR 01");
            printf("\t\t\t\t\t\tNamaste Nerds");
            sleep(20);
            exit(1);
        }
        default:invalidChoice();getchar();getchar();system("cls");goto u;
    }
    }
}
