
int conversion()
{
    system("cls");
    int o1,a,b;
    a:
    printf("*************************************************************************************************************************************\n");
    printf("Choose the option as you wish the Conversion Type to be:\n\n");
    printf("1.Time Conversion\n\n2.Weight Conversion\n\n3.Temperature Conversion\n\n4.Volume conversion\n\n5.Length Conversion\n\n6.Back to the the Concepts list\n\n\n");
    printf("*************************************************************************************************************************************\n");
    b:
    scanf("%d",&o1);
    switch(o1)
    {
        case 1:timeConversion();system("cls");goto a;break;
        case 2:weightConversion();system("cls");goto a;break;
        case 3:temperatureConversion();system("cls");goto a;break;
        case 4:volumeConversion();system("cls");goto a;break;
        case 5:lengthConversion();system("cls");goto a;break;
        case 6:system("cls");return 18;
        default:invalidChoice();goto b;
    }
}
void invalidChoice()
{
    printf("The entered option is invalid!! Kindly choose the right one.\n\n");
}
void timeConversion()
{
    system("cls");
    printf("\t\t\t\t1.Time Conversion\n\n");
    int o2,c,c1;
    c:
    printf("Choose the option as you wish the conversion to be:\n\n");
    printf("1.Seconds to Minute(s)\n\n2.Minute(s) to Seconds\n\n3.Minutes to Hour(s)\n\n4.Hour(s) to Minutes\n\n5.Hours to Day(s)\n\n6.Day(s) to Hours\n\n7.Days to Week(s)\n\n8.Week(s) to Days\n\n9.Days to Month(s)\n\n10.Month(s) to Days\n\n11.Months to Year(s)\n\n12.Year(s) to Months\n\n13.Back to the Conversion types list\n\n\n");
    c1:
    scanf("%d",&o2);
    switch(o2)
    {
        case 1:sToMin();sleep(4);system("cls");goto c;break;
        case 2:minToS();sleep(4);system("cls");goto c;break;
        case 3:minToH();sleep(4);system("cls");goto c;break;
        case 4:hToMin();sleep(4);system("cls");goto c;break;
        case 5:hToD();sleep(4);system("cls");goto c;break;
        case 6:dToH();sleep(4);system("cls");goto c;break;
        case 7:dToW();sleep(4);system("cls");goto c;break;
        case 8:wToD();sleep(4);system("cls");goto c;break;
        case 9:dToM();sleep(4);system("cls");goto c;break;
        case 10:mToD();sleep(4);system("cls");goto c;break;
        case 11:mToY();sleep(4);system("cls");goto c;break;
        case 12:yToM();sleep(4);system("cls");goto c;break;
        case 13:conversion();break;
        default:invalidChoice();sleep(4);goto c1;
    }
}
void weightConversion()
{
    system("cls");
    printf("\t\t\t\t2.Weight Conversion\n\n");
    int o3,d,d1;
    d:
    printf("Choose the option as you wish the conversion to be:\n\n");
    printf("1.Grams to Pound(s)\n\n2.Pound(s) to Grams\n\n3.Grams to Ounce(s)\n\n4.Ounce(s) to Grams\n\n5.Ounces to Pound(s)\n\n6.Pound(s) to Ounces\n\n7.Back to the Conversion types list\n\n");
    d1:
    scanf("%d",&o3);
    switch(o3)
    {
        case 1:gToP();sleep(4);system("cls");goto d;break;
        case 2:pToG();sleep(4);system("cls");goto d;break;
        case 3:gToO();sleep(4);system("cls");goto d;break;
        case 4:oToG();sleep(4);system("cls");goto d;break;
        case 5:oToP();sleep(4);system("cls");goto d;break;
        case 6:pToO();sleep(4);system("cls");goto d;break;
        case 7:conversion();break;
        default:invalidChoice();goto d1;
    }
}
void temperatureConversion()
{
    system("cls");
    printf("\t\t\t\t3.Temperature Conversion\n\n");
    int o4,e,e1;
    e:
    printf("Choose the option as you wish the conversion to be:\n\n");
    printf("1.Kelvin to Celsius\n\n2.Kelvin to Fahrenheit\n\n3.Celsius to Fahrenheit\n\n4.Celsius to Kelvin\n\n5.Fahrenheit to Celsius\n\n6.Fahrenheit to Kelvin\n\n7.Back to the Conversion types list\n\n");
    e1:
    scanf("%d",&o4);
    switch(04)
    {
        case 1:kToC();sleep(4);system("cls");goto e;break;
        case 2:kToF();sleep(4);system("cls");goto e;break;
        case 3:cToF();sleep(4);system("cls");goto e;break;
        case 4:cToK();sleep(4);system("cls");goto e;break;
        case 5:fToC();sleep(4);system("cls");goto e;break;
        case 6:fToK();sleep(4);system("cls");goto e;break;
        case 7:conversion();break;
        default:invalidChoice();goto e1;
    }
}
void volumeConversion()
{
    system("cls");
    printf("\t\t\t\t4.Volume conversion\n\n");
    int o5,f,f1;
    f:
    printf("Choose the option as you wish the conversion to be:\n\n");
    printf("1.Liters to Gallon(s)\n\n2.Gallon(s) to Liters\n\n3.Back to the Conversion types list\n\n");
    f1:
    scanf("%d",&o5);
    switch(o5)
    {
        case 1:lToG();sleep(4);system("cls");goto f;break;
        case 2:gToL();sleep(4);system("cls");goto f;break;
        case 3:conversion();break;
        default:invalidChoice();goto f1;
    }
}
void lengthConversion()
{
    system("cls");
    printf("\t\t\t\t5.Length Conversion\n\n");
    int o6,g,g1;
    g:
    printf("Choose the option as you wish the conversion to be:\n\n");
    printf("1.Centimeters to Inch(es)\n\n2.Meters to Yard(s)\n\n3.Centimeters to Foot/Feet\n\n4.Inches to Centimeters\n\n5.Inches to Yard(s)\n\n6.Inches to Foot/Feet\n\n7.Yards to Meters\n\n8.Yards to Inches\n\n9.Yards to Foot/Feet\n\n10.Foot/Feet to Centimeters\n\n11.Foot/Feet to Inches\n\n12.Kilometeters to Mile(s)\n\n13.Mile(s) to Kilometeters\n\n14.Back to the Conversion types list\n\n\n");
    g1:
    scanf("%d",&o6);
    switch(o6)
    {
        case 1:cmToI();sleep(4);system("cls");goto g;break;
        case 2:mtToY();sleep(4);system("cls");goto g;break;
        case 3:cmToFt();sleep(4);system("cls");goto g;break;
        case 4:iTocm();sleep(4);system("cls");goto g;break;
        case 5:iToY();sleep(4);system("cls");goto g;break;
        case 6:iToFt();sleep(4);system("cls");goto g;break;
        case 7:yToMt();sleep(4);system("cls");goto g;break;
        case 8:yToI();sleep(4);system("cls");goto g;break;
        case 9:yToFt();sleep(4);system("cls");goto g;break;
        case 10:ftToCm();sleep(4);system("cls");goto g;break;
        case 11:ftToI();sleep(4);system("cls");goto g;;break;
        case 12:kmtoMile();sleep(4);system("cls");goto g;break;
        case 13:mileToKm();sleep(4);system("cls");goto g;
        case 14:conversion();break;
        default:invalidChoice();sleep(4);goto g1;
    }
}
void sToMin()
{
    system("cls");
    printf("\t\t\t1.Seconds to Minute(s)\n\n");
    float s,min;
    printf("\n\nEnter the time in Seconds:\n");
    scanf("%f",&s);
    min=s/60;
    printf("%f in seconds is %f Minutes.\n",s,min);
}
void minToS()
{
    system("cls");
    printf("\t\t\t2.Minute(s) to Seconds\n\n");
    float s,min;
    printf("\n\nEnter the time in Minutes:\n");
    scanf("%f",&min);
    s=min*60;
    printf("%f in minutes is %f Seconds.\n",min,s);
}
void minToH()
{
    system("cls");
    printf("\t\t\t3.Minutes to Hour(s)\n\n");
    float h,min;
    printf("\n\nEnter the time in Minutes:\n");
    scanf("%f",&min);
    h=min/60;
    printf("%f in Minutes is %f Hours.\n",min,h);
}
void hToMin()
{
    system("cls");
    printf("\t\t\t4.Hour(s) to Minutes\n\n");
    float h,min;
    printf("\n\nEnter the time in Hours:\n");
    scanf("%f",&h);
    min=h*60;
    printf("%f in Hours is %f Minutes.\n",min,h);
}
void hToD()
{
    system("cls");
    printf("\t\t\t5.Hours to Day(s)\n\n");
    float h,d;
    printf("\n\nEnter the time in Hours:\n");
    scanf("%f",&h);
    h=d/24;
    printf("%f in Hours is %f Days.\n",h,d);
}
void dToH()
{
    system("cls");
    printf("\t\t\t6.Day(s) to Hours\n\n");
    float s,m;
    printf("\n\nEnter the number of Days:\n");
    scanf("%f",&s);
    m=s*24;
    printf("%f in Days is %f Hours.\n",s,m);
}
void dToW()
{
    system("cls");
    printf("\t\t\t7.Days to Week(s)\n\n");
    float s,m;
    printf("\n\nEnter the number of Days:\n");
    scanf("%f",&s);
    m=s/7;
    printf("%f in Days is %f Weeks.\n",s,m);
}
void wToD()
{
    system("cls");
    printf("\t\t\t8.Week(s) to Days\n\n");
    float s,m;
    printf("\n\nEnter the number of Weeks:\n");
    scanf("%f",&s);
    m=s*7;
    printf("%f in Weeks is %f Days.\n",s,m);
}
void dToM()
{
    system("cls");
    printf("\t\t\t9.Days to Month(s)\n\n");
    float s,h;
    printf("\n\nEnter the number of Days:\n");
    scanf("%f",&s);
    h=s/30;
    printf("%f in Days is %f Months.\n",s,h);
}
void mToD()
{
    system("cls");
    printf("\t\t\t10.Month(s) to Days\n\n");
    float s,m;
    printf("\n\nEnter the number of Days:\n");
    scanf("%f",&s);
    m=s*30;
    printf("%f in Days is %f Months.\n",s,m);
}
void mToY()
{
    system("cls");
    printf("\t\t\t11.Months to Year(s)\n\n");
    float s,m;
    printf("\n\nEnter the number of Months:\n");
    scanf("%f",&s);
    m=s/12;
    printf("%f in Months is %f Years.\n",s,m);
}
void yToM()
{
    system("cls");
    printf("\t\t\t12.Year(s) to Months\n\n");
    float s,m;
    printf("\n\nEnter the number of Years:\n");
    scanf("%f",&s);
    m=s*12;
    printf("%f in Years is %f Months.\n",s,m);
}
void gToP()
{
    system("cls");
    printf("\t\t\t1.Grams to Pound(s)\n\n");
    float g,p;
    printf("\n\nEnter the unit in Grams:\n");
    scanf("%f",&g);
    p=g*0.0022;
    printf("%f in Grams is %f Pounds.\n",g,p);
}
void pToG()
{
    system("cls");
    printf("\t\t\t2.Pound(s) to Grams\n\n");
    float g,p;
    printf("\n\nEnter the unit in Pounds:\n");
    scanf("%f",&g);
    p=g/0.0022;
    printf("%f in Pounds is %f Grams.\n",g,p);
}
void gToO()
{
    system("cls");
    printf("\t\t\t3.Grams to Ounce(s)\n\n");
    float g,p;
    printf("\n\nEnter the unit in Grams:\n");
    scanf("%f",&g);
    p=g/0.035274;
    printf("%f in Grams is %f Ounces.\n",g,p);
}
void oToG()
{
    system("cls");
    printf("\t\t\t4.Ounce(s) to Grams\n\n");
    float g,p;
    printf("\n\nEnter the unit in Ounces:\n");
    scanf("%f",&g);
    p=g*0.035274;
    printf("%f in Ounces is %f Grams.\n",g,p);
}
void oToP()
{
    system("cls");
    printf("\t\t\t5.Ounces to Pound(s)\n\n");
    float g,p;
    printf("\n\nEnter the unit in Ounces:\n");
    scanf("%f",&g);
    p=g*16;
    printf("%f in Ounces is %f Pounds.\n",g,p);
}
void pToO()
{
    system("cls");
    printf("\t\t\t6.Pound(s) to Ounces\n\n");
    float g,p;
    printf("\n\nEnter the unit in Pounds:\n");
    scanf("%f",&g);
    p=g/16;
    printf("%f in Pounds is %f Ounces.\n",g,p);
}
void kToC()
{
    system("cls");
    printf("\t\t\t1.Kelvin to Celsius\n\n");
    float k,c;
    printf("\n\nEnter the unit in Kelvin:\n");
    scanf("%f",&k);
    c=k-274.15;
    printf("%f in Kelvin is %f Celsius.\n",k,c);
}
void kToF()
{
    system("cls");
    printf("\t\t\t2.Kelvin to Fahrenheit\n\n");
    float k,c;
    printf("\n\nEnter the unit in Kelvin:\n");
    scanf("%f",&k);
    c=((k-273.15)*(9/5))+32;
    printf("%f in Kelvin is %f Fahrenheit.\n",k,c);
}
void cToF()
{
    system("cls");
    printf("\t\t\t3.Celsius to Fahrenheit\n\n");
    float k,c;
    printf("\n\nEnter the unit in Celsius:\n");
    scanf("%f",&k);
    c=(k*(9/5))+32;
    printf("%f in Celsius is %f Fahrenheit.\n",k,c);
}
void cToK()
{
    system("cls");
    printf("\t\t\t4.Celsius to Kelvin\n\n");
    float k,c;
    printf("\n\nEnter the unit in Celsius:\n");
    scanf("%f",&k);
    c=(k-32)*(5/9);
    printf("%f in Celsius is %f Kelvin.\n",k,c);
}
void fToC()
{
    system("cls");
    printf("\t\t\t5.Fahrenheit to Celsius\n\n");
    float k,c;
    printf("\n\nEnter the unit in Fahrenheit:\n");
    scanf("%f",&k);
    c=(k-32)*(5/9);
    printf("%f in Fahrenheit is %f Celsius.\n",k,c);
}
void fToK()
{
    system("cls");
    printf("\t\t\t6.Fahrenheit to Kelvin\n\n");
    float k,c;
    printf("\n\nEnter the unit in Fahrenheit:\n");
    scanf("%f",&k);
    c=(k-32)*(5/9)+273.15;
    printf("%f in Fahrenheit is %f Celsius.\n",k,c);
}
void lToG()
{
    system("cls");
    printf("\t\t\t1.Liters to Gallon(s)\n\n");
    float k,c;
    printf("\n\nEnter the unit in Liters:\n");
    scanf("%f",&k);
    c=k*0.264172;
    printf("%f in Liters is %f Gallons.\n",k,c);
}
void gToL()
{
    system("cls");
    printf("\t\t\t2.Gallon(s) to Liters\n\n");
    float k,c;
    printf("\n\nEnter the unit in Liters:\n");
    scanf("%f",&k);
    c=k/0.264172;
    printf("%f in Liters is %f Gallons.\n",k,c);
}
void cmToI()
{
    system("cls");
    printf("\t\t\t1.Centimeters to Inch(es)\n\n");
    float k,c;
    printf("\n\nEnter the unit in Liters:\n");
    scanf("%f",&k);
    c=k/0.264172;
    printf("%f in Liters is %f Gallons.\n",k,c);
}
void mtToY()
{
    system("cls");
    printf("\t\t\t2.Meters to Yard(s)\n\n");
    float k,c;
    printf("\n\nEnter the unit in Meters:\n");
    scanf("%f",&k);
    c=k*1.0936;
    printf("%f in Meters is %f Yards.\n",k,c);
}
void cmToFt()
{
    system("cls");
    printf("\t\t\t3.Centimeters to Foot/Feet\n\n");
    float k,c;
    printf("\n\nEnter the unit in Centimeters:\n");
    scanf("%f",&k);
    c=k*0.032808;
    printf("%f in Centimeters is %f Foot/Feet.\n",k,c);
}
void iTocm()
{
    system("cls");
    printf("\t\t\t4.Inches to Centimeters\n\n");
    float k,c;
    printf("\n\nEnter the unit in Inches:\n");
    scanf("%f",&k);
    c=k*2.54;
    printf("%f in Inches is %f Centimeters.\n",k,c);
}
void iToY()
{
    system("cls");
    printf("\t\t\t5.Inches to Yard(s)\n\n");
    float k,c;
    printf("\n\nEnter the unit in Inches:\n");
    scanf("%f",&k);
    c=k*0.277778;
    printf("%f in Inches is %f Yards.\n",k,c);
}
void iToFt()
{
    system("cls");
    printf("\t\t\t6.Inches to Foot/Feet\n\n");
    float k,c;
    printf("\n\nEnter the unit in Inches:\n");
    scanf("%f",&k);
    c=k*0.083333;
    printf("%f in Inches is %f Foot/Feet.\n",k,c);
}
void yToMt()
{
    system("cls");
    printf("\t\t\t7.Yards to Meters\n\n");
    float k,c;
    printf("\n\nEnter the unit in Yards:\n");
    scanf("%f",&k);
    c=k*0.9144;
    printf("%f in Yards is %f Meters.\n",k,c);
}
void yToI()
{
    system("cls");
    printf("\t\t\t8.Yards to Inches\n\n");
    float k,c;
    printf("\n\nEnter the unit in Yards:\n");
    scanf("%f",&k);
    c=k*0.9144;
    printf("%f in Yards is %f Inches.\n",k,c);
}
void yToFt()
{
    system("cls");
    printf("\t\t\t9.Yards to Foot/Feet\n\n");
    float k,c;
    printf("\n\nEnter the unit in Yards:\n");
    scanf("%f",&k);
    c=k*3;
    printf("%f in Yards is %f Foot/Feet.\n",k,c);
}
void ftToCm()
{
    system("cls");
    printf("\t\t\t10.Foot/Feet to Centimeters\n\n");
    float k,c;
    printf("\n\nEnter the unit in Foot/Feet:\n");
    scanf("%f",&k);
    c=k*30.48;
    printf("%f in Foot/Feet is %f Centimeters.\n",k,c);
}
void ftToI()
{
    system("cls");
    printf("\t\t\t11.Foot/Feet to Inches\n\n");
    float k,c;
    printf("\n\nEnter the unit in Inches:\n");
    scanf("%f",&k);
    c=k*12;
    printf("%f in Inches is %f Inches.\n",k,c);
}
void kmtoMile()
{
    system("cls");
    printf("\t\t\t12.Kilometeters to Mile(s)\n\n");
    float k,c;
    printf("\n\nEnter the unit in Kilometers:\n");
    scanf("%f",&k);
    c=k*0.621;
    printf("%f in Kilometers is %f Miles.\n",k,c);
}
void mileToKm()
{
    system("cls");
    printf("\t\t\t13.Mile(s) to Kilometeters\n\n");
    float k,c;
    printf("\n\nEnter the unit in Kilometers:\n");
    scanf("%f",&k);
    c=k*1.609344;
    printf("%f in Kilometers is %f Miles.\n",k,c);
}
