#include<stdio.h>

#include<stdlib.h>
struct CALENDER
{
 char*day;
 int dd,mm,yyyy;
 char*desc;
};
struct CALENDER*cal;
int n, n1, n2;
void create()
{
 printf("enter the number of days\n");
 scanf("%d",&n);
 cal=(struct CALENDER*)calloc(n,sizeof(struct CALENDER));
}
void read()
{
 printf("enter the data for a days\n");
 for(int i=0;i<n;i++)
 {
 printf("enter the size for day\n");
 scanf("%d",&n1);
 printf("enter the size for description\n");
 scanf("%d",&n2);
 cal[i].day=(char*)malloc(n1*sizeof(char));
 cal[i].desc=(char*)malloc(n2*sizeof(char));
 printf("enter the day,date and description\n");
 scanf("%s%d%d%d",cal[i].day,&cal[i].dd,&cal[i].mm,&cal[i].yyyy);
 fflush(stdin);
 gets(cal[i].desc);
 }
}
void display()
{
 printf("Calender data for a day");
 printf("\nDAY\t\tDATE\t\tDESCRIPTION\n");
 printf("------------------------");
 for(int i=0;i<n;i++)
 {

printf("\n%s\t%d/%d/%d\t",cal[i].day,cal[i].dd,cal[i].mm,cal[i].yyyy);
 puts(cal[i].desc);
 }
}
void main()
{
 create();
 read();
 display();
 free(cal);
}
