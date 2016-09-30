#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login()
{
int i;
char ch[10]="welcome";//fixed password as welcome
char a[30],p[30],c;
printf("\n   \n     \n   enter your name  \n   enter your password :welcome  \n\n\n\n\n press  enter to continue\n\n\n   ");
getch();
printf("enter your name ");
scanf("%s",&a);
printf("   enter your password should be 7 letters :\t");
for(i=0;i<7;i++)
{
c=getch();//for printing password as *
p[i]=c;
printf("*");
}
p[i]='\0';//asign the last char to get exact string
if((strcmp(p,ch))==0)
printf("\n  name:%s \tLogged Successfully",a);//perform our task
else
{
printf("\n   enter correct password  ");
printf("%s");
}
}

int main()
{
    login();
    return 0;
}
