﻿#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int col,ma=0,mi=0,d=0;
    int a[col]; 
    scanf("%d", &col);
for(int i = 0; i < col; i++) //введення данних
{
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
}
int max = 0; //макс. число
for(int i = 0; i < col; i++) //обчислення макс. числа
{
 if(a[i] > max)
 {
 max = a[i];
 }
}
for(int i = 0; i < col; i++) //обчислення індекса макс. числа
{
 if(max==a[i])
 {
 ma = i;
 }
}
int min = a[0]; //мін. число
for(int i = 0; i < col; i++) //обчислення мін. числа
{
 if(min > a[i])
 {
 min = a[i];
 }
}
for(int i = 0; i < col; i++) //обчислення індекса мін. числа
{
 if(min==a[i])
 {
 mi = i;
 }
}
if(ma>mi)
{
  for(int i = 0; i < col; i++) //задача
  {
    if(i < mi)
    {
    printf("a[%d]=%d\t", i, a[i]);
    }
    else if(i > ma)
    {
    printf("a[%d]=%d\t", i, a[i]);
    }
  }
}
else if(ma<mi)
{
  for(int i = 0; i < col; i++) //задача
  {
    if(i < ma)
    {
    printf("a[%d]=%d\t", i, a[i]);
    }
    else if(i > mi)
    {
    printf("a[%d]=%d\t", i, a[i]);
    }
  }
}
    return 0;
}
