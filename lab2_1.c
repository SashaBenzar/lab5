﻿#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int e=0;
    int col;
    int a[col];
    scanf("%d", &col);
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
  if(a[i]==0)
  {
    e++;
  }
}
printf("e=%d\t",e); //кількість нульових елементів
    return 0;
}










#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int col,dob=0,d=0;
    int a[col];
    scanf("%d", &col);
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
}
int max = 0;
for(int i = 0; i < col; i++)
{
 if(a[i] > max) //введення макс. числа
 {
 max = a[i];
 }
 if(max==a[i]) //індекс макс. числа
 {
 dob = i;
 }
}
printf("e=%d\t",dob);
    return 0;
}