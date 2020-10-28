#include <stdio.h>
#include <math.h>
#include <float.h>
#include <time.h>

int main()
{
const int rowCount = 3, colCount = 3, Low = -100, High = 100;
srand(time(0));
int a[rowCount][colCount]; 
int b[rowCount];
for (int i = 0; i < rowCount; i++) //вхідні данні
for (int j = 0; j < colCount; j++)
a[i][j]=Low+rand()%High;

for (int i = 0; i < rowCount; i++) //введення a[0]
for (int j = 0; j < colCount; j++)
printf("a[%d][%d]=%d\n", i, j, a[i][j]);

for (int i = 0; i < rowCount; i++) //пошук b[0]
for (int j = 1; j < colCount; j++){
if(a[0][j-1] > a[0][j]){
b[0]=1;}
else{
b[0]=0;break;}
}
for (int i = 0; i < rowCount; i++) //пошук b[1]
for (int j = 1; j < colCount; j++){
if(a[1][j-1] > a[1][j]){
b[1]=1;}
else{
b[1]=0;break;}
}
for (int i = 0; i < rowCount; i++) //пошук b[2]
for (int j = 1; j < colCount; j++){
if(a[2][j-1] > a[2][j]){
b[2]=1;}
else{
b[2]=0;break;}
}
printf("\n\n");
for (int i = 0; i < rowCount; i++)
printf("b[%d]=%d\n", i, b[i]);
}
