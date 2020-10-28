#include <stdio.h>
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
}
for(int i = 0; i < col; i++) //обчислення кількості нулів
{
  if(a[i]==0)
  {
    e++;
  }
}
printf("кількість нулів:%d\n",e); //кількість нульових елементів

int max = 0,ma=0,dob=1; //2 частина задачі
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
for(int i = 0; i < col; i++) //множення елементів
{
  if(i>ma)
  {
    dob*=a[i];
  }
}
printf("добуток елементів:%d",dob); //добуток елементів 
    return 0;
}
