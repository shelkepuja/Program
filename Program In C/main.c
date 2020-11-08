/*
Problem statement: Accept number from user and Check whether number is even or odd.
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvnOdd(int iNo)
{

int iResult=0;

iResult=iNo%2;

if(iResult==0)
{
return TRUE;
}
else
{
return FALSE;
}

}

int main()
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
printf("Number is odd\n");
}

return 0;
}
