#include<stdio.h>
int main(void)
{
double status,sup[365],supsum=0,supaverage,michsum=0,michaverage,mich[365],thirdwarmest=0,fourthwarmest=0,fifthwarmest=0;
double huron[365],huronaverage,huronsum=0,erie[365],erieaverage,eriesum=0,ont[365],secondwarmest=0,sixthwarmest=0;
double ontsum=0,ontaverage,stclair[365],stclairsum=0,stclairaverage,overallaverage,lakelist[6],warmest=0;
int i=0,k;
FILE* in;
in=fopen("lakes.txt","r");
for (i=0;i<365;++i)
{
fscanf(in,"%lf %lf %lf %lf %lf %lf",&sup[i],&mich[i],&huron[i],&erie[i],&ont[i],&stclair[i]);
}
for (i=354;i<365;++i)
{
supsum=supsum+sup[i];
michsum=michsum+mich[i];
huronsum=huronsum+huron[i];
eriesum=eriesum+erie[i];
ontsum=ontsum+ont[i];
stclairsum=stclairsum+stclair[i];
}
for (i=0;i<79;++i)
{
supsum=supsum+sup[i];
michsum=michsum+mich[i];
huronsum=huronsum+huron[i];
eriesum=eriesum+erie[i];
ontsum=ontsum+ont[i];
stclairsum=stclairsum+stclair[i];
}
supaverage=supsum/90;
michaverage=michsum/90;
huronaverage=huronsum/90;
erieaverage=eriesum/90;
ontaverage=ontsum/90;
stclairaverage=stclairsum/90;
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
}
for (i=0;i<6;++i)
{
	if ((lakelist[i]<warmest)&&(lakelist[i]>secondwarmest))
	secondwarmest=lakelist[i];
}
for (i=0;i<6;++i)
{
	if ((lakelist[i]<secondwarmest)&&(lakelist[i]>thirdwarmest))
	thirdwarmest=lakelist[i];
}
for (i=0;i<6;++i)
{
	if ((lakelist[i]<thirdwarmest)&&(lakelist[i]>fourthwarmest))
	fourthwarmest=lakelist[i];
}
for (i=0;i<6;++i)
{
	if ((lakelist[i]<fourthwarmest)&&(lakelist[i]>fifthwarmest))
	fifthwarmest=lakelist[i];
}
for (i=0;i<6;++i)
{
	if ((lakelist[i]<fifthwarmest)&&(lakelist[i]>sixthwarmest))
	sixthwarmest=lakelist[i];
}
printf("Lakes from warmest to coldest winter average temperature:\n");
if (warmest==lakelist[0])
printf("Lake Superior\n");
	else if (warmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (warmest==lakelist[2])
		printf("Lake Huron\n");
			else if (warmest==lakelist[3])
			printf("Lake Erie\n");
				else if (warmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (warmest==lakelist[5])
					printf("Lake St.Clair\n");
if (secondwarmest==lakelist[0])
printf("Lake Superior\n");
	else if (secondwarmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (secondwarmest==lakelist[2])
		printf("Lake Huron\n");
			else if (secondwarmest==lakelist[3])
			printf("Lake Erie\n");
				else if (secondwarmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (secondwarmest==lakelist[5])
					printf("Lake St.Clair\n");
if (thirdwarmest==lakelist[0])
printf("Lake Superior\n");
	else if (thirdwarmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (thirdwarmest==lakelist[2])
		printf("Lake Huron\n");
			else if (thirdwarmest==lakelist[3])
			printf("Lake Erie\n");
				else if (thirdwarmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (thirdwarmest==lakelist[5])
					printf("Lake St.Clair\n");
if (fourthwarmest==lakelist[0])
printf("Lake Superior\n");
	else if (fourthwarmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (fourthwarmest==lakelist[2])
		printf("Lake Huron\n");
			else if (fourthwarmest==lakelist[3])
			printf("Lake Erie\n");
				else if (fourthwarmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (fourthwarmest==lakelist[5])
					printf("Lake St.Clair\n");
if (fifthwarmest==lakelist[0])
printf("Lake Superior\n");
	else if (fifthwarmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (fifthwarmest==lakelist[2])
		printf("Lake Huron\n");
			else if (fifthwarmest==lakelist[3])
			printf("Lake Erie\n");
				else if (fifthwarmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (fifthwarmest==lakelist[5])
					printf("Lake St.Clair\n");
if (sixthwarmest==lakelist[0])
printf("Lake Superior\n");
	else if (sixthwarmest==lakelist[1])
	printf("Lake Michigan\n");
		else if (sixthwarmest==lakelist[2])
		printf("Lake Huron\n");
			else if (sixthwarmest==lakelist[3])
			printf("Lake Erie\n");
				else if (sixthwarmest==lakelist[4])
				printf("Lake Ontario\n");
					else if (sixthwarmest==lakelist[5])
					printf("Lake St.Clair\n");
return 0;
}
					

