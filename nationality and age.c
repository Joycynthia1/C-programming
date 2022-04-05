#include<stdio.h>
int main ()
{
int age ;
char nat[]="kenyan";
printf("Enter the age");
scanf("%d",&age);

printf("Enter the nationality");
scanf("%d",'&nat');
if((age>=18) && (nat=="kenyan"))
{
printf("eligible to vote");
}
 else
{
printf("not eligible to vote");
}
return 0;

}