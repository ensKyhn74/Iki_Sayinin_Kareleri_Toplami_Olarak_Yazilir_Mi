#include <stdio.h>
#include <math.h> // pow fonksiyonu üs almayı sağlar
// klavyeden girilen sayı 2 sayının kareleri toplamı biçiminde yazılabilir mi?
// Örneğin input: 29
//         output: 2^2 + 5^2 = 29
//                 5^2 + 2^2 = 29

int main() 
           
{ 
  
  double i,j; 
  double sayi;
  
  printf("sayi girin: ");
  scanf("%lf",&sayi);
  
   for(i = 0 ; i <= 1000 ; i++) 
   {
     for(j = 0 ; j <= 1000 ; j++)
      {
        if((pow(i,2) + pow(j,2)) == sayi)
         {
           printf("%.lf^2 + %.lf^2 = %.lf\n",i,j,sayi);
         }
      }
   }

  return 0;
  
}
