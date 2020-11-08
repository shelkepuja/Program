/*
Problem statement: Accept number from user and Check whether number is even or odd.

Input:Enter Number
      10
Output:Number is Even

Input:Enter Number
      15
Output:Number is Odd

*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvnOdd(int iNo)
{

int iResult=0;// Local varible

iResult=iNo%2;

if(iResult==0)//After division remainder get zero then it will return true.
{
return TRUE;
}
else
{
return FALSE;
}

}

int main()//Entry Point function where execution starts.
{
int iValue=0;
BOOL bAns=FALSE;

printf("Enter Number\n");
scanf("%d",&iValue);

bAns=ChkEvnOdd(iValue);

if(bAns==TRUE)
{
printf("Number is Even\n");
}

else
{
printf("Number is Odd\n");
}

return 0;//Successful termination
}
