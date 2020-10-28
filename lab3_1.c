#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main()
{
const int rowCount = 3, colCount = 4;
int a[rowCount][colCount];
for (int i = 0; i < rowCount; i++)
for (int j = 0; j < colCount; j++) { 
printf("a[%d][%d]=", i, j);
scanf("%d", &a[i][j]); }
//перший ряд
int min1 = a[0][0], mi1 = 0, dob1 = 1, max1 = a[0][0], ma1 = 0, dob2 = 1;
for (int i = 0; i < rowCount; i++) //введення мінімального та максимального чисел 1 стовбця
for (int j = 0; j < colCount; j++){
if(a[i] [0] < min1){
 min1 = a[i][0];
 }
 if(a[i] [0]> max1){
 max1 = a[i][0];
 }
 }
 for(int i = 0; i < colCount; i++) //індекс мінімального та максимального чисел 1 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(min1==a[i][0])
 {
 mi1 = i;
 }
 if(max1==a[i][0])
 {
 ma1 = i;
 }
}
 for(int i = 0; i < colCount; i++) //добуток рядків за мінімальним та максимальним числами 1 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(a[i][j]==a[mi1][j])
 {
 dob1*=a[i][j];
 }
 if(a[i][j]==a[ma1][j])
 {
 dob2*=a[i][j];
 }
}

//другий ряд
int min2 = a[0][1], mi2 = 0, dob3 = 1, max2 = a[0][1], ma2 = 0, dob4 = 1;
for (int i = 0; i < rowCount; i++) //введення мінімального та максимального чисел 2 стовбця
for (int j = 0; j < colCount; j++){
if(a[i] [1] < min2){
 min2 = a[i][1];
 }
 if(a[i] [1]> max2){
 max2 = a[i][1];
 }
 }
 for(int i = 0; i < colCount; i++) //індекс мінімального та максимального чисел 2 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(min2==a[i][1])
 {
 mi2 = i;
 }
 if(max2==a[i][1])
 {
 ma2 = i;
 }
}
 for(int i = 0; i < colCount; i++) //добуток рядків за мінімальним та максимальним числами 2 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(a[i][j]==a[mi2][j])
 {
 dob3*=a[i][j];
 }
 if(a[i][j]==a[ma2][j])
 {
 dob4*=a[i][j];
 }
}

//третій ряд
int min3 = a[0][2], mi3 = 0, dob5 = 1, max3 = a[0][2], ma3 = 0, dob6 = 1;
for (int i = 0; i < rowCount; i++) //введення мінімального та максимального чисел 3 стовбця
for (int j = 0; j < colCount; j++){
if(a[i] [2] < min3){
 min3 = a[i][2];
 }
 if(a[i] [2]> max3){
 max3 = a[i][2];
 }
 }
 for(int i = 0; i < colCount; i++) //індекс мінімального та максимального чисел 3 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(min3==a[i][2])
 {
 mi3 = i;
 }
 if(max3==a[i][2])
 {
 ma3 = i;
 }
}
 for(int i = 0; i < colCount; i++) //добуток рядків за мінімальним та максимальним числами 3 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(a[i][j]==a[mi3][j])
 {
 dob5*=a[i][j];
 }
 if(a[i][j]==a[ma3][j])
 {
 dob6*=a[i][j];
 }
}

//четвертий ряд
int min4 = a[0][3], mi4 = 0, dob7 = 1, max4 = a[0][3], ma4 = 0, dob8 = 1;
for (int i = 0; i < rowCount; i++) //введення мінімального та максимального чисел 4 стовбця
for (int j = 0; j < colCount; j++){
if(a[i] [3] < min4){
 min4 = a[i][3];
 }
 if(a[i] [3]> max4){
 max4 = a[i][3];
 }
 }
 for(int i = 0; i < colCount; i++) //індекс мінімального та максимального чисел 4 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(min4==a[i][3])
 {
 mi4 = i;
 }
 if(max4==a[i][3])
 {
 ma4 = i;
 }
}
 for(int i = 0; i < colCount; i++) //добуток рядків за мінімальним та максимальним числами 4 стовбця
 for (int j = 0; j < colCount; j++) 
{
 if(a[i][j]==a[mi4][j])
 {
 dob7*=a[i][j];
 }
 if(a[i][j]==a[ma4][j])
 {
 dob8*=a[i][j];
 }
}
printf("\n b[i]={ ");
int b[8]={dob1,dob2,dob3,dob4,dob5,dob6,dob7,dob8}; //відповідь
for(int f = 0; f < 8; f++) //задача
{
  printf("%d ",b[f]);
}printf("}");
}
