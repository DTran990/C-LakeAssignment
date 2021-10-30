#include<stdio.h>
int main(void)
{
double status,sup[365],supsum=0,supaverage,michsum=0,michaverage,mich[365];
double huron[365],huronaverage,huronsum=0,erie[365],erieaverage,eriesum=0,ont[365];
double ontsum=0,ontaverage,stclair[365],stclairsum=0,stclairaverage,overallaverage;
int i,k;
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
printf("The yearly average temperature of Lake Superior is %.2lf\n",supaverage);
printf("The yearly average temperature of Lake Michigan is %.2lf\n",michaverage);
printf("The yearly average temperature of Lake Huron is %.2lf\n",huronaverage);
printf("The yearly average temperature of Lake Erie is %.2lf\n",erieaverage);
printf("The yearly average temperature of Lake Ontario is %.2lf\n",ontaverage);
printf("The yearly average temperature of Lake St.Clair is %.2lf\n",stclairaverage);
printf("The yearly average temperature of for all lakes put together is %.2lf\n",overallaverage);
fclose(in);
return 0;
}
