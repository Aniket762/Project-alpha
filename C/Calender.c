#include <stdio.h>
int chkleap(int y)
{
	if((y%400)==0||((y%100!=0)&(y%4==0)))
		{
			//printf("Leap year\n");
				return 1;
		}
	else return 0;
}
int reyear(int y)
{
	int re=0;
	y=y-1;
	int mod=y%400;
	re=(mod +( mod/4));
	if(mod<100)
	{
		re=re;
		//printf("odd days in year 0 calculation %d\n",re);
	}
	else if(mod<200)
	{
		re=re-1;
		//printf("odd days in year1 calculation %d\n",re);
	}
	else if(mod<300)
	{

		re=re-2;
		//printf("odd days in year 2calculation %d\n",re);
	}
	else if(mod<400)
	{

	re=re-3;
	//printf("odd days in year3 calculation %d\n",re);
	}
re=re%7;
//printf("odd days in year calculation %d\n",re);
return re;
}
int remonth(int m,int y,int d)
{
	int re=0;
	if(m>1)
		re=re+31;

	if (m>2)
		{if(chkleap(y))
			re=re+29;
		else re=re+28;}

	if (m>3)
		re =re+31;

	if(m>4)
		re=re+30;

	if(m>5)
		re=re+31;

	if(m>6)
		re=re+30;
	if(m>7)
		re=re+31;
	if(m>8)
		re=re+31;
	if(m>9)
		re=re+30;
	if(m>10)
		re=re+31;
	if(m>11)
		re=re+30;
	//printf("odd days in month calculation %d\n day=%d\n",re%7,(d%7));
	re=re+d;
	re=re%7;

	return re;

}
void prDay(int rem)
{
	if(rem==0)
	{
		printf("Sunday\n");
		return;
	}
	if(rem==1)
	{
		printf("Monday\n");
		return;
	}
	if(rem==2)
	{
		printf("Tuesday\n");
		return;
	}
	if(rem==3)
	{
		printf("Wednesday\n");
		return;
	}
	if(rem==4)
	{
		printf("Thursday\n");
		return;
	}
	if(rem==5)
	{
		printf("Friday\n");
		return;
	}
	if(rem==6)
	{
		printf("Saturday\n");
		return;
	}

}
int main()
{
	int d,m,y,t;
	printf("How many dates you want to find ? ( no of test cases)\n");
	scanf("%d",&t);
	while(t--)
		{
				printf("Enter Date in DD:MM:YYYY format (eg 14:10:2020)\n");
				scanf("%d:%d:%d",&d,&m,&y);
				prDay((reyear(y)+remonth(m,y,d))%7);
		}
	return 0;
}
