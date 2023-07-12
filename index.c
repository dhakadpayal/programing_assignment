//Name-Payal Dhakad
//Assignment 1st batch-2pm 26june
/*
//  1.explain c taken.
One can define tokens in C as the smallest individual elements
in a program that is meaningful to the functioning of a compiler.
A token is the smallest unit used in a C program. Each and every
punctuation and word that you come across in a C program is token.


//2.write a program to calculate square of a givin no.

#include<stdio.h>
void main(){
   int num,square;
   printf("enter the number\n");
   scanf("%d",&num);
   square=num*num;
   printf("result=%d",square);
}



//  3.write a program to swap using third variable.

#include<stdio.h>
void main(){
   int a,b,c;
   printf("enter two number\n");
   scanf("%d%d",&a,&b);
    printf("before swap= %d\t%d\n",a,b);
          c=a;
          a=b;
          b=c;
          printf("after swap %d\t%d",a,b);
}

//  4.write a program to swap without using third variable.

#include<stdio.h>
void main(){
   int a,b,c;
   printf("enter two number\n");
   scanf("%d%d",&a,&b);
    printf("before swap= %d\t%d\n",a,b);
           a=a+b;
          b=a-b;
          a=a-b;
          printf("after swap %d\t%d",a,b);

}

//  5.write a program to calculate area of triangle.


  #include<stdio.h>
   void main(){
   int base,height,area;
   printf("enter base and height of triangle\n");
   scanf("%d%d",&base,&height);
   area=((1/2)*base*height);
   printf("area of triangle is=%d",area);
}



//  6.write a program to calculate area of circle.

#include<stdio.h>
void main(){
  float area,h,radius;
   printf("enter height of circle   : ");
   scanf("%f",&h);
   radius=h/2;
   area=(3.14*radius*radius);
   printf("Aria of circle: %f\n",area);
}

//  7.write a program to calculate simple interest.

#include<stdio.h>
void main(){
      int p,r,t,si;
      printf("enter ammount");
      scanf("%d",&p);
       printf("enter rate %=");
      scanf("%d",&r);
       printf("enter time");
      scanf("%d",&t);
      si=((p*r*t)/100);
      printf("simple intrest=%d",si);
}

//  8.write a program to calculate temprature conversion from celcius to fahrenheit.(f=9/5*c+32)

#include<stdio.h>
void main(){
     float c,f;
       printf("enter celcius value\n");
       scanf("%f",&c);
       f=(c*9)/5+32;
       printf("temprature fahrenheit=%f",f);

}



//  9.write a program that accepts four digit number from user and calculate the sum of first and last digit.

#include<stdio.h>
void main(){
   int num,f,l,sum;
   printf("enter 4 digit number\n");
   scanf("%d",&num);
   f=num/1000;
   l=num%10;
   sum=f+l;
   printf("sum of first and last digit is=%d",sum);

}


//  10.write a program to calculate gross salary and net salary .accept basic salary from user,TA(travel allowance) i.e 10% of basic salary,pf (provident fund)i.e 7.8% of basic,DA(dearness allowance)is 500, pf (dearness allowance) is 500 pf(dearness gs=basic+da+ta; ns=gs-pf)


#include<stdio.h>
void main(){
   int salary,pf,ta,da;
   float gs,ns;
   printf("enter your salary\n");
   scanf("%d",&salary);
   ta=salary*10/100;
   pf=salary*7.8/100;
   da=500;
   gs= salary+da+ta;
   ns=gs-pf;
   printf("gross salary=%f",gs);
       printf("net salary=%f",ns);
}






//11 write a  program that accept a three digit number from user and check wheather it is palindrom or not.

#include<stdio.h>
void main(){
      int num,rev,f,l,m,temp;
      printf("enter the number\n");
       scanf("%d",&num);
       temp=num;
       l=num%10;
       m=(num/10)%10;
       f=num/100;
       rev=(f*1)+(m*10)+(l*100);
       if(rev==temp){
             printf("palindrom number\n");

       }else{
            printf("not a palindrom number\n");
       }
}



#include<stdio.h>
void main(){
   int num,rev=0,r,temp;
   printf("enter the number\n");
   scanf("%d",&num);
   temp=num;
   while(num>0){
      r= num%10;
      rev=rev*10+r;
      num=num/10;
   }
   if(temp==rev){

   printf("palindrom number");
   }else{
       printf("not a palindrom number\n");
   }
}


//12 write a  program that accept a three digit number from user and check wheather it is armstrong or not.


#include<stdio.h>
void main(){
   int num,sum=0,r,temp;
   printf("enter the number\n");
   scanf("%d",&num);
   temp=num;
   while(num>0){
      r= num%10;
      sum=sum+(r*r*r);
      num=num/10;
   }
   if(temp==sum){

   printf("armstrong number");
   }else{
       printf("not a armstrong number\n");
   }
}



//13 write a program to calculate whether year is leap year or not
#include <stdio.h>
int main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  // leap year if perfectly divisible by 400
  if (year % 400 == 0) {
     printf("%d is a leap year.", year);
  }
  // not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
     printf("%d is not a leap year.", year);
  }
  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0) {
     printf("%d is a leap year.", year);
  }
  // all other years are not leap years
  else {
     printf("%d is not a leap year.", year);
  }

  return 0;
}



// 14 write a program to calculate area of different shap based
// on users choice s.c or r (like s for square ,c for circle
//  and shapes r for rectangle)

#include <stdio.h>
#include <math.h>
 void main()
{
    int choice;
   printf("Enter 1 to find area of Triangle 2 for finding area of Square3 for finding area of Circle 4 for finding area of Rectangle 5 for Parallelogram ");
   scanf("%d",&choice);
   switch(choice) {
    case 1:
    {
        int a, b, c;
        float s, area;
         printf("Enter sides of triangle");
         scanf("%d%d %d",&a,&b,&c);
         s=(a+b+c)/2;
         area=(sqrt()(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f",area);
         break;
    }
    case 2:
    {
         float side, area;
         printf("Enter Sides of Square");
         scanf("%f",&side);
         area=side*side;
         printf("Area of Square is %f",area);
         break;
    }
    case 3:
    {
         float radius, area;
         printf("Enter Radius of Circle");
         scanf("%f",&radius);
         area=3.14159*radius*radius;
         printf("Area of Circle %f",area);
         break;
    }
    case 4:
    {
         float len, breadth, area;
         printf("Enter Length and Breadth of Rectangle");
         scanf("%f %f",&len,&breadth);
         area=len*breadth;
         printf("Area of Rectangle is %f",area);
         break;
    }
    case 5:
    {
         float base, height, area;
         printf("Enter base and height of Parallelogram");
         scanf("%f %f",&base,&height);
         area=base*height;
         printf("Enter area of Parallelogram is %f",area);
         break;
    }
    default:
    {
         printf("Invalid Choice");
         break;
    }
   }
}


//15 write a program to check if entnered character is vowel on not

#include<stdio.h>
void main(){
   char ch ;
   printf("enter the char=");
   scanf("%c",&ch);
   if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u'){
       printf("vowels\n");
   } else if(ch=='A'|| ch=='E' || ch=='I'|| ch=='O' || ch=='U'){
       printf("vowels\n");
   }
   else{
       printf("consonent\n");
   }
}

*/


