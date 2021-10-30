#include<stdio.h>
int main(void)
{
double status,sup[365],mich[365],huron[365],erie[365],ont[365],stclair[365];
int i,supcount=0,michcount=0,huroncount=0,eriecount=0,ontcount=0,stclaircount=0;
FILE* in;
in=fopen("lakes.txt","r");
for (i=0;i<365;++i)
{
fscanf(in,"%lf %lf %lf %lf %lf %lf",&sup[i],&mich[i],&huron[i],&erie[i],&ont[i],&stclair[i]);
}
for (i=0;i<365;++i)
{
if (sup[i]>20)
supcount=supcount+1;
if (mich[i]>20)
michcount=michcount+1;
if (huron[i]>20)
huroncount=huroncount+1;
if (erie[i]>20)
eriecount=eriecount+1;
if (ont[i]>20)
ontcount=ontcount+1;
if (stclair[i]>20)
stclaircount=stclaircount+1;
}
printf("Number of days you can swim comfortably in Lake Superior is %d\n",supcount);
printf("Number of days you can swim comfortably in Lake Michigan is %d\n",michcount);
printf("Number of days you can swim comfortably in Lake Huron is %d\n",huroncount);
printf("Number of days you can swim comfortably in Lake Erie is %d\n",eriecount);
printf("Number of days you can swim comfortably in Lake Ontario is %d\n",ontcount);
printf("Number of days you can swim comfortably in Lake St.Clair is %d\n",stclaircount);
fclose(in);
return 0;
}
