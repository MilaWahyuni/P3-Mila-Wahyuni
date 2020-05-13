#include<stdio.h> 
using namespace std; 
//fungsi contoh  
void contoh(int *a, int *b)
{  
*a+=7;  
*b+=6;    
printf("\nnilai dalam fungsi = %i",*a);  
printf("\nnilai dalam fungsi = %i",*b);    
} 
 
 int main()  
{ 
 int c=1; 
 int d=2;   
 printf("nilai sebelum digunakan= %i ",c);   
 printf("\nnilai sebelum digunakan = %i ",d);    
 contoh(&c , &d); 
 printf("\nnilai sesudah digunakan = %i ",c);   
 printf("\nnilai sesudah digunakan = %i ",d);     
 } 
 
