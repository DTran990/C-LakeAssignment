#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int 
date (int count, int *x)
{
	int i=0,day,month;
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-28;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-30;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-30;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-30;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (count>0)
	{
	count=count-30;
	i=i+1;
	}
	if (count>0)
	{
	count=count-31;
	i=i+1;
	}
	if (i==1)
	count=count+31;
		else if (i==2)
		count=count+28;
			else if (i==3)
			count=count+31;
				else if (i==4)
				count=count+30;
					else if (i==5)
					count=count+31;
						else if (i==6)
						count=count+30;
							else if (i==7)
							count=count+31;
								else if (i==8)
								count=count+31;
									else if (i==9)
									count=count+30;
										else if (i==10)
										count=count+31;
											else if (i==11)
											count=count+30;
												else if (i==12)
												count=count+31;
	*x=abs(count);
	month=i;
	return (month);
}
int main(void)
{
double status,sup[365],mich[365],huron[365],erie[365],ont[365],stclair[365],supmax=0,supmin=10000;
double michmax=0,michmin=10000,huronmax=0,huronmin=1000,eriemax=0,eriemin=1000,ontmax=0,ontmin=1000;
double stclairmax=0,stclairmin=1000;
int i,x,k,day,month,count,countsupmax,countsupmin,countmichmax,countmichmin,counthuronmax,counthuronmin,counteriemax,counteriemin;
int countontmax,countontmin,countstclairmax,countstclairmin,supmonthmax,supmonthmin;
int michmonthmax,michmonthmin,huronmonthmax,huronmonthmin;
int eriemonthmax,eriemonthmin,ontmonthmax,ontmonthmin,stclairmonthmax;
int stclairmonthmin;
FILE* in;
in=fopen("lakes.txt","r");
for (i=0;i<365;++i)
{
fscanf(in,"%lf %lf %lf %lf %lf %lf",&sup[i],&mich[i],&huron[i],&erie[i],&ont[i],&stclair[i]);
}
for (i=0;i<365;++i)
{
	if (sup[i]>supmax)
	{
	supmax=sup[i];
	countsupmax=i+1;
	}
	if (sup[i]<supmin)
	{
	supmin=sup[i];
	countsupmin=i+1;
	}
	if (mich[i]>michmax)
	{
	michmax=mich[i];
	countmichmax=i+1;
	}
	if (mich[i]<michmin)
	{
	michmin=mich[i];
	countmichmin=i+1;
	}
	if (huron[i]>huronmax)
	{
	huronmax=huron[i];
	counthuronmax=i+1;
	}
	if (huron[i]<huronmin)
	{
	huronmin=huron[i];
	counthuronmin=i+1;
	}
	if (erie[i]>eriemax)
	{
	eriemax=erie[i];
	counteriemax=i+1;
	}
	if (erie[i]<eriemin)
	{
	eriemin=erie[i];
	counteriemin=i+1;
	}
	if (ont[i]>ontmax)
	{
	ontmax=ont[i];
	countontmax=i+1;
	}
	if (ont[i]<ontmin)
	{
	ontmin=ont[i];
	countontmin=i+1;
	}
	if (stclair[i]>stclairmax)
	{
	stclairmax=stclair[i];
	countstclairmax=i+1;
	}
	if (stclair[i]<stclairmin)
	{
	stclairmin=stclair[i];
	countstclairmin=i+1;
	}	   	       	          	         
}
supmonthmax=date(countsupmax,&x);
printf("Warmest Lake Superior Temp=%.2lf dd/mm=%2d/%2d\n",supmax,x,supmonthmax); 
supmonthmin=date(countsupmin,&x);
printf("Coolest Lake Superior Temperature=%.2lf dd/mm=%2d/%2d\n",supmin,x,supmonthmin);
michmonthmax=date(countmichmax,&x);
printf("Warmest Lake Michigan Temp=%.2lf dd/mm=%2d/%2d\n",michmax,x,michmonthmax); 
michmonthmin=date(countmichmin,&x);
printf("Coolest Lake Michigan Temperature=%.2lf dd/mm=%2d/%2d\n",michmin,x,michmonthmin);
huronmonthmax=date(counthuronmax,&x);
printf("Warmest Lake Huron Temp=%.2lf dd/mm=%2d/%2d\n",huronmax,x,huronmonthmax);
huronmonthmin=date(counthuronmin,&x); 
printf("Coolest Lake Huron Temperature=%.2lf dd/mm=%2d/%2d\n",huronmin,x,huronmonthmin);
eriemonthmax=date(counteriemax,&x);
printf("Warmest Lake Erie Temp=%.2lf dd/mm=%2d/%2d\n",eriemax,x,eriemonthmax); 
eriemonthmin=date(counteriemin,&x);
printf("Coolest Lake Erie Temperature=%.2lf dd/mm=%2d/%2d\n",eriemin,x,eriemonthmin);
ontmonthmax=date(countontmax,&x);
printf("Warmest Lake Ontario Temp=%.2lf dd/mm=%2d/%2d\n",ontmax,x,ontmonthmax); 
ontmonthmin=date(countontmin,&x);
printf("Coolest Lake Ontario Temperature=%.2lf dd/mm=%2d/%2d\n",ontmin,x,ontmonthmin);
stclairmonthmax=date(countstclairmax,&x);
printf("Warmest Lake St.Clair Temp=%.2lf dd/mm=%2d/%2d\n",stclairmax,x,stclairmonthmax); 
stclairmonthmin=date(countstclairmin,&x);
printf("Coolest Lake St.Clair Temperature=%.2lf dd/mm=%2d/%2d\n",stclairmin,x,stclairmonthmin);
fclose(in);
return 0;
}
