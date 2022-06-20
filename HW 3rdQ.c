#include <stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the day, month and year\n");
	scanf("%d%d%d",&d,&m,&y);
	printf("Day following %d:%d:%d is ",d,m,y);
	if(y%100==0)
	{
		if(y%400==0)
		{
			if((m==2 && d==29)||(d==30 && (m==4||m==6||m==9||m==11))||(d==31 && (m==1||m==3||m==5||m==7||m==8||m==10)))
			printf("%d:%d:%d",1,m+1,y);
			else if(d==31 && m==12)
			printf("%d:%d:%d",1,1,y+1);
			else
			printf("%d:%d:%d",d+1,m,y);
		}
	}
	else if(y%4==0)
	{
		if((m==2 && d==29)||(d==30 && (m==4||m==6||m==9||m==11))||(d==31 && (m==1||m==3||m==5||m==7||m==8||m==10)))
		printf("%d:%d:%d",1,m+1,y);
		else if(d==31 && m==12)
		printf("%d:%d:%d",1,1,y+1);
		else
		printf("%d:%d:%d",d+1,m,y);
	}
	else
	{
		if((m==2 && d==28)||(d==30 && (m==4||m==6||m==9||m==11))||(d==31 && (m==1||m==3||m==5||m==7||m==8||m==10)))
		printf("%d:%d:%d",1,m+1,y);
		else if(d==31 && m==12)
		printf("%d:%d:%d",1,1,y+1);
		else if(d==29 && m==2)
		printf("Day is not possible");
		else
		printf("%d:%d:%d",d+1,m,y);
	}
	return 0;
}
