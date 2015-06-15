///*********************Floating Binary to Floating Decimal Conversion*********************///
///*****************************Stop Reproduce, Start Learning*****************************///
/*
    **Floating Binary to Floating Decimal Conversion
    **Programming Language: C
    **Execute From: https://github.com/noor017/c-programming/blob/root/bin2dec.c
    **Also found in: http://pastebin.com/0zJVFx4n
    **Special Thanks to: Rabi Vai

    **@Start Coding From: 13 June, 2015 11:45PM
    **@End of Coding: 15 June, 2015 09:30PM
*/

#include<stdio.h>
#include<string.h>
#include<conio.h>

//Start Defining power function
double pow(int c, int d)
{
    double pow=1;
    if (d >= 0)
    {
        int i=1;
        while(i <= d)
        {
            pow = pow*c;
            i++;
        }
    }
    else
    {
        int i=0;
        while (i>d)
        {
            pow = pow/c;
            i--;
        }
    }
    return pow;
}
//End Defining power function


//Start Main function
int main()
{
    int befDec[50], aftDec[50];
    int i, j=0, k=0;
    int aftDecDigits, befDecDigits, storeIntegral=0;

    double pow(int, int);
    double storeFractional=0, doubleValue;

    char digits[50];
    char up = 'd';



    //Taking binary digits in character arrary
    printf("Enter binary point number: ");
    scanf("%s", &digits);

    //Separating the integral and fractional part from the doubleing point value
    //strlen() is an inbuilt funtion defined in string.h header file
    for(i=0; i<strlen(digits); i++)
    {
        if(digits[i]=='.')
        {
            up='u';
        }
        else if(up=='d')
        {
            //ASCII value of 0 is 48, so when character is casted to integer, it results to 48, which is to be subtracted
            befDec[i] = (int)digits[i]-48;
            k++;
        }

        else
        {
            aftDec[j] = (int)digits[i]-48;
            j++;
        }
    }

    // Storing the lenght of Integral and fractional
    befDecDigits = k;
    aftDecDigits = j;

    //Loop to convert the integral binary part to decimal
    j=0;
    for(i=befDecDigits-1; i>=0; i--)
    {
        storeIntegral = storeIntegral + (befDec[i] *(int) pow(2,j));
        j++;
    }

    //Loop to convert the fractoinal binary part to doubleing point value
    j = -1;
    for(i = 0; i<aftDecDigits; i++)
    {
        storeFractional = storeFractional + (aftDec[i]*pow(2,j));
        j--;
    }

    //Adding both the integral and fractional part to get the resultant value
    doubleValue = storeIntegral + storeFractional;
    printf("doubleing point value = %0.2lf\n", doubleValue);
}

//End Main function
