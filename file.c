# PROGRAMMING FOR PROBLEM SOLVING #
## **ASSIGNMENT**
## *SUBMITTED BY:*

**NAME:KARNEET KAUR**
**ROLL NUMBER:1921054**
**BRANCH:INFORMATION TECHNOLOGY**
 **SECTION:I.T. A2**
## MY C PROGRAMS
 
**1. WRITE  A  SOURCE  CODE  TO PRINT "HELLO BUDDIES".**
```
#include<stdio.h>
int main()
{
        puts("\n Welcome to budding engineers!\n");
}
```
*OUTPUT~*
```
Welcome to budding engineers!
```
 

**2. WRITE  A  SOURCE  CODE  TO CONVERT  TEMPERATURE  FROM FAHRENHEIT TO CELSIUS**
```
#include<stdio.h>
 int main()

{
   float Celsius,Fahrenheit;
     printf("\n Enter the value in fahrenheit:");
     scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
       printf("\n%.2f fahrenheit=%.2f celsius",celsius,fahrenheit);
       
return 0;
}
```
*OUTPUT~*
```

Enter the value in fahrenheit:274

celsius=134.44
```
**3.  WRITE A SOURCE CODE  TO SHOW THE RESULT OF OPERANDS**
```
int main()

{
  int a, b, res;
  char c;
  printf ("Enter any one operator +, -, *, / \n");
  scanf("%c", &c);
  printf ("\n Enter two numbers \n");
  scanf ("\n %d \n %d",&a, &b);

  if (c=='+')
  {   
    res=a+b;
    printf("\n The sum is %d",res);
  }

  else if(c== '-')
  {
    res=a-b;
    printf("\n The difference is %d",res); 
  }
 
  else if(c== '*')
  {
    res=a*b;
    printf("\n The product is %d",res);
  }

  else if(c=='/')
  {
    res=a/b;
    printf("\n The quotient is %d",res);
  }
 
  else
  {
    printf ("\n Invalid entry");
  }
 
  return 0;
 
}

```
*OUTPUT~*
```

Enter any one operator +, -, *, / 
*
 Enter two numbers 
4
6

 The product is 24
 
```
**4.  WRITE  THE  SOURCE  CODE TO ENTER THE  STUDENT'S INFORMATION**
```

#include<stdio.h>
  int main()
  {
    char name[50];
    int roll_number;

    printf("Enter the name of the student:\n");
    scanf("%s",&name);

    printf("Enter the roll number:\n");
    scanf("%d",&roll_number);

    printf("name= %s\n",name);
    printf("roll number= %d\n",roll_number); 

    return 0;
 
  }
```
*OUTPUT~*
```
Enter the name of the student:
karneet
Enter the roll number:
1921054
name= karneet
roll number= 1921054
```
**5.  WRITE  A  SOURCE  CODE  TO CHECK  WHETHER  THE NUMBER IS POSITIVE OR NEGATIVE**
```
#include<stdio.h> 
 int main() 
{ 
 int a; 
 
    printf("enter the number a="); 
    scanf("%d",&a); 
 
   if (a>0) 
     printf("%d is positive\n",a); 
 
   else if (a<0) 
     printf("%d is negative\n",a); 
 
   else 
     printf("%d is zero"); 
 
return 0;
}
```
*OUTPUT~*
```
enter the number a=-5
 -5 is negative
 ```
 **6. WRITE  A SOURCE  CODE  TO ENTER DOUBLE NUMBER**
```
#include<stdio.h>
int main()
{  
printf("double number");
for(int i=0;i<=10;i++)
{
printf("\n");
printf("%d%d",i,i);
}
}
```
*OUTPUT~*
```
double number
00
11
22
33
44
55
66
77
88
99
1010
```
**7.  WRITE  A SOURCE CODE  TO PRINT THE TABLE  FROM THE USER'S CHOICE.**
```
#include<stdio.h>
 int main()
  
{
  int i,n;

  printf("Enter the number=");
  scanf("%d",&n);

   for(i=1;i<=10;i++)

   printf("%d X %d=%d\n",n,i,n*i);

 return 0 ;
}
```
*OUTPUT~*
```
Enter the number=8
8 X 1=8
8 X 2=16
8 X 3=24
8 X 4=32
8 X 5=40
8 X 6=48
8 X 7=56
8 X 8=64
8 X 9=72
8 X 10=80
```
**8.  WRITE  A  SOURCE  CODE  TO PRINT THE TABLE WITHIN THE RANGE**
```#include<stdio.h> 
  int main() 
{ 
  int row, col,y,k; 
 
 
      printf("Enter the two numbers for getting the table between their range\n");
      scanf("%d%d",&row,&col); 
      k=row; 
      printf("Table as\n"); 
    for(y=1;y<=10;y++) 
 
 { 
    for(row;row<=col;row++) 
 
  { 
      printf("%4d",row*y); 
  } 
      row=k;
      printf("\n");
  }
  return 0;
}
```
*OUTPUT~*
```
Enter the two numbers for getting the table between their range
2 
6
Table as
   2   3   4   5   6
   4   6   8  10  12
   6   9  12  15  18
   8  12  16  20  24
  10  15  20  25  30
  12  18  24  30  36
  14  21  28  35  42
  16  24  32  40  48
  18  27  36  45  54
  20  30  40  50  60

```
**9. WRITE  A  SOURCE CODE  TO PRINT THE CALCULATOR**
```
#include<stdio.h>
 int main()

{

   puts(" _______________");
   puts("|_______________|");
   puts("| 1 | 2 | 3 |   |");
   puts("|___|___|___|___|");
   puts("| 4 | 5 | 6 | + |");
   puts("|___|___|___|___|");
   puts("| 7 | 8 | 9 | - |");
   puts("|___|___|___|___|");
   puts("|     0     | * |");
   puts("|___________|___|");

return 0;
}

```
*OUTPUT~*
```
 _______________
|_______________|
| 1 | 2 | 3 |   | 
|___|___|___|___|
| 4 | 5 | 6 | + |
|___|___|___|___|
| 7 | 8 | 9 | - |
|___|___|___|___|
|     0     | * |
|___________|___|

```
**10.WRITE A SOURCE  CODE  TO CHECK WHETHER THE NUMBER IS EVEN  OR  ODD**
```
#include<stdio.h> 
  int main() 
 
{ 
   int a; 
     printf("Enter the number:"); 
     scanf("%d",&a); 
 
  { 

    if(a%2==0) 
    printf("Number is even"); 
 
    if(a%3==0) 
    printf("\n Number is odd"); 
 
    else if(a==0) 
    printf("\n Number is zero"); 
  }
 return 0;
}
```

*OUTPUT~*
```
Enter the number:56
Number is even
```
**11.  WRITE  A  SOURCE  CODE  TO FIND THE FACTORIAL OF A NUMBER**
```
#include<stdio.h>
  int main()
 
{
   int n,a,fact=1;
  
    printf("Enter the number to find its factorial:\n");
    scanf("%d",&n);
    
    for(a=1;a<=n;a++)
    
    fact=fact*a;

    printf("factorial of %d=%d\n",n,fact);
    
 return 0;

}
```
*OUTPUT~*
```
Enter the number to find its factorial:
5
factorial of 5=120

```
**12. WRITE  A  SOURCE  CODE  TO FIND FACTORIAL OF THE NUMBER  USING RECURSION**
```
  #include <stdio.h>
    long int multiplyNumbers(int n);
    int main()
    {
        int n;
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        printf("Factorial of %d = %ld", n, multiplyNumbers(n));
        return 0;
    }
    long int multiplyNumbers(int n)
    {
        if (n >= 1)
            return n*multiplyNumbers(n-1);
        else
            return 1;
   }
    ```
*OUTPUT~*
```
Enter a positive integer: 6
Factorial of 6 = 720
```
**13. WRITE A SOURCE CODE TO CHECK WHETHER NUMBER IS PRIME OR NOT**
```
#include<stdio.h> 
  int main() 
 
{ 
    int i,n; 
    printf("Enter the number:"); 
    scanf("%d",&n); 
 
    for(i=2;i<n;i++) 
{ 
     if(n%i==0) 
 {   
     printf("not prime\n"); 
 } 
    else 
  { 
   printf("prime\n"); 
 } 
} 

 return 0;

}
 
 
 

```
*OUTPUT~*
```
Enter the number:7
prime
```
**14. WRITE A CODE TO PRINT F USING #**
```
#include<stdio.h>
 int main()

{

   puts("######");
   puts("#");
   puts("#");
   puts("####");
   puts("#");
   puts("#");
   puts("#");

return 0;

}

```
*OUTPUT~*
```
######
#
#
####
#
#
#
```
**15. WRITE A SOURCE CODE TO FIND THE LARGEST AMONG THE ARRAY**
```
`#include<stdio.h> 
  int main() 
{ 
 int array[50],size,i,largest; 
 printf("enter the size of the array:"); 
 scanf("%d",&size); 
 printf("enter %d element of array;",size); 
 for(i=1;i<size;i++) 
 scanf("%d",&array[i]); 
 largest=array[0]; 
 
 for(i=1;i<size;i++) 

{

 if(largest<array[i]);
 largest=array[i];
 
}
  printf("\n largest element present in the given  array is %d ",largest);
  return 0;
 }

```
*OUTPUT~*
```
enter the size of the array:10
enter 10 element of array;1
6
34
23
7
22
44
7
45

```
**16. WRITE A SOURCE CODE TO SHOW THE TOTAL EXPERIENCE OF AN EMPLOYEE**
```
#include<stdio.h> 
 int main() 
{ 
    int n,i; 

      printf("enter the number of employees"); 
      scanf("%d",&n); 
      int exp,sum=0; 
      for(int i=1;i<=n;i++) 
{
        printf("enter experience of %d th employees(in     years):",i); 
        scanf("%d",&exp); 
        sum=sum+exp; 
}
        printf("%d\n",sum);
 return 0;
}

```
*OUTPUT~*
```
enter the number of employees3
enter experience of 1 th employees(in years): 5
enter experience of 2 th employees(in years): 6
enter experience of 3 th employees(in years):8
19

```
**17. WRITE A AOURCE CODE TO CHECK WHETHER  THE NUMBER IS PRIME OR NOT WITHIN THE RANGE** 
```
#include<stdio.h> 
  int main() 

{  
  int s,e,i,j,p; 

   printf("enter the starting value:\n"); 
   scanf("%d",&s); 
 
   printf("enter the ending value:\n"); 
   scanf("%d",&e); 
 
  for(j=s;j<=e;j++) 
{ 
  p=0; 
 
  for(i=2;i<j;i++) 
{ 
  if(j%i==0)
{
 p=1;
}
}
  if(p==1)
  printf("%d are not  prime:\n",j);
 
  else
   printf("%d are  prime\n",i);
}
 
 return 0;
}
 
```
*OUTPUT~*
```
enter the starting value:
5
enter the ending value:
18
5 are  prime
6 are not  prime:
7 are  prime
8 are not  prime:
9 are not  prime:
10 are not  prime:
11 are  prime
12 are not  prime:
13 are  prime
14 are not  prime:
15 are not  prime:
16 are not  prime:
17 are  prime
18 are not  prime:
```
**18.  WRITE A SOURCE CODE TO PRINT THE TABLE OF EVEN NUMBER**
```
#include<stdio.h>
 int main()
 
{

  int i,n;
  printf("enter the number=");
  scanf("%d",&n);
  if(n%2==0)
  for(i=1;i<=10;i++)

  printf("%d X %d=%d\n",n,i,n*i);

  else 
  printf("enter the number is not even");

return 0;
}

```
*OUTPUT~*
```
enter the number=4
4 X 1=4
4 X 2=8
4 X 3=12
4 X 4=16
4 X 5=20
4 X 6=24
4 X 7=28
4 X 8=32
4 X 9=36
4 X 10=40

```
**19. WRITE A SOURCE CODE TO REVERSE A NUMBER**
```
#include <stdio.h>
    int main()
    {
        int n, reversedNumber = 0, remainder;
        printf("Enter an integer: ");
        scanf("%d", &n);
        while(n != 0)
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        printf("Reversed Number = %d", reversedNumber);
        return 0;
    }
```
*OUTPUT~*
```
Enter an integer: 234
Reversed Number = 432
```
20.WRITE A SOURCE CODE TO PRINT SUM OF TWO NUMBERS
```
include<stdio.h>
 int main()

{

int a;
int b;
int c;

 printf("enter two numbers to get sum:");
 scanf("%d %d",&a,&b);
 printf("\n the result is %d+%d=%d\n",a,b,c=a+b);

return 0;
}
```
*OUTPUT~*
```
enter two numbers to get sum:6
7

 the result is 6+7=13

```
## THANK YOU
