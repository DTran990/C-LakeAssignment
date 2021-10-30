#include<stdio.h>
int main(void)
{
double status,sup[365],supsum=0,supaverage,michsum=0,michaverage,mich[365];
double huron[365],huronaverage,huronsum=0,erie[365],erieaverage,eriesum=0,ont[365];
double ontsum=0,ontaverage,stclair[365],stclairsum=0,stclairaverage,overallaverage,warmest=0,coolest=10000,lakelist[6];
double greater[6],lessthan[6];
int i,k,j=0,l=0;
FILE* in;
in=fopen("lakes.txt","r");
for (i=0;i<365;++i)
{
fscanf(in,"%lf %lf %lf %lf %lf %lf",&sup[i],&mich[i],&huron[i],&erie[i],&ont[i],&stclair[i]);
}
for (i=0;i<365;++i)
{
supsum=supsum+sup[i];
michsum=michsum+mich[i];
huronsum=huronsum+huron[i];
eriesum=eriesum+erie[i];
ontsum=ontsum+ont[i];
stclairsum=stclairsum+stclair[i];
}
supaverage=supsum/365;
michaverage=michsum/365;
huronaverage=huronsum/365;
erieaverage=eriesum/365;
ontaverage=ontsum/365;
stclairaverage=stclairsum/365;
overallaverage=(supsum+michsum+huronsum+eriesum+ontsum+stclairsum)/(365*6);
lakelist[0]=supaverage;
lakelist[1]=michaverage;
lakelist[2]=huronaverage;
lakelist[3]=erieaverage;
lakelist[4]=ontaverage;
lakelist[5]=stclairaverage;
for (i=0;i<6;++i)
{
	if (lakelist[i]>warmest)
	warmest=lakelist[i];
	if (lakelist[i]<coolest)
	coolest=lakelist[i];
	if (lakelist[i]>overallaverage)
	{
	greater[j]=lakelist[i];
	j=j+1;
	}
		else if (lakelist[i]<overallaverage)
		{
		lessthan[l]=lakelist[i];
		l=l+1;
		}
}
if (warmest==lakelist[0])
printf("Warmest lake is Lake Superior with an average temperature of %.2lf\n",warmest);
	else if (warmest==lakelist[1])
	printf("Warmest lake is Lake Michigan with an average temperature of %.2lf\n",warmest);
		else if (warmest==lakelist[2])
		printf("Warmest lake is Lake Huron with an average temperature of %.2lf\n",warmest);
			else if (warmest==lakelist[3])
			printf("Warmest lake is Lake Erie with an average temperature of %.2lf\n",warmest);
				else if (warmest==lakelist[4])
				printf("Warmest lake is Lake Ontario with an average temperature of %.2lf\n",warmest);
					else if (warmest==lakelist[5])
					printf("Warmest lake is Lake St.Clair with an average temperature of %.2lf\n",warmest);
if (coolest==lakelist[0])
printf("Coolest lake is Lake Superior with an average temperature of %.2lf\n",coolest);
	else if (coolest==lakelist[1])
	printf("Coolest lake is Lake Michigan with an average temperature of %.2lf\n",coolest);
		else if (coolest==lakelist[2])
		printf("Coolest lake is Lake Huron with an average temperature of %.2lf\n",coolest);
			else if (coolest==lakelist[3])
			printf("Coolest lake is Lake Erie with an average temperature of %.2lf\n",coolest);
				else if (coolest==lakelist[4])
				printf("Coolest lake is Lake Ontario with an average temperature of %.2lf\n",coolest);
					else if (coolest==lakelist[5])
					printf("coolest lake is Lake St.Clair with an average temperature of %.2lf\n",coolest);
printf("Lakes with higher averages than the overall average are/is ");
for (i=0;i<6;++i)
{
	if (greater[i]==lakelist[0])
	printf("Lake Superior, ");
		else if (greater[i]==lakelist[1])
		printf("Lake Michigan, ");
			else if (greater[i]==lakelist[2])
			printf("Lake Huron, ");
				else if (greater[i]==lakelist[3])
				printf("Lake Erie, ");
					else if (greater[i]==lakelist[4])
					printf("Lake Ontario, ");
						else if (greater[i]==lakelist[5])
						printf("Lake St.Clair, ");
}
printf("\nLakes with lower averages than the overall average are/is ");
for (i=0;i<6;++i)
{
	if (lessthan[i]==lakelist[0])
	printf("Lake Superior, ");
		else if (lessthan[i]==lakelist[1])
		printf("Lake Michigan, ");
			else if (lessthan[i]==lakelist[2])
			printf("Lake Huron, ");
				else if (lessthan[i]==lakelist[3])
				printf("Lake Erie, ");
					else if (lessthan[i]==lakelist[4])
					printf("Lake Ontario, ");
						else if (lessthan[i]==lakelist[5])
						printf("Lake St.Clair, ");
}
fclose(in);
return 0;
}
