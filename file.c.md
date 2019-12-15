![enter image description here](https://lh3.googleusercontent.com/vVnH6BXe-LhJsPfOsgew6B8F71aXmb7rVa7Z6HBNYyRpZ_pcReGF2OtL8iwd2MX3qC6zUX5Axfwm)
# PROGRAMMING FOR PROBLEM SOLVING
## **ASSIGNMENT**
## *SUBMITTED BY:*

#### **NAME:KARNEET KAUR**
#### **ROLL NUMBER:1921054**
#### **BRANCH:INFORMATION TECHNOLOGY**
 #### **SECTION:I.T. A2**
 
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
```
#include<stdio.h> 
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
**9.WRITE A SOURCE CODE TO CHECK WHETHER NUMBER IS PRIME OR NOT.**
```
#include <stdio.h>
 int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }
    return 0;
}
```
**OUTPUT**
```
Enter the positive integer:53
53 is a prime number
```
**10. WRITE A SOURCE CODE TO CHECK WHETHER NUMBER IS EVEN OR ODD.**
```
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
   
    if(num % 2 == 0)
        printf("%d is even.", num);

    if(num==0)
        printf("%d is zero.",num);

    else
        printf("%d is odd.", num);
    
    return 0;
}
```
**OUTPUT**
```
Enter an integer: 56         
56 is even

**11.WRITE A SOURCE CODE TO FIND FACTORIAL OF A NUMBER.**
```
#include<stdio.h>
  int main()                                      
{
   int n,a,fact=1;   
                             
    printf("Enter the number to find its factoria$
    scanf("%d",&n);

    for(a=1;a<=n;a++)

    fact=fact*a;

    printf("factorial of %d=%d\n",n,fact);

 return 0;
```
**OUTPUT**
```  
Enter the number to find its factorial:
5
factorial of 5=120    
```
                                     }
