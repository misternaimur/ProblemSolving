/*
   _____  .__         __                  _______         .__                      
  /     \ |__| ______/  |_  ___________   \      \ _____  |__| _____  __ _________ 
 /  \ /  \|  |/  ___|   __\/ __ \_  __ \  /   |   \\__  \ |  |/     \|  |  \_  __ \
/    Y    \  |\___ \ |  | \  ___/|  | \/ /    |    \/ __ \|  |  Y Y  \  |  /|  | \/
\____|__  /__/____  >|__|  \___  >__|    \____|__  (____  /__|__|_|  /____/ |__|   
        \/        \/           \/                \/     \/         \/              

*/

#include<stdio.h>
int main()
{
  int   product_code1 , product_code2, unit_of_Product1 , unit_of_Product2 ;
  float Price_per_Product1 , Price_per_Product2 ,Sum1 , Sum2;

  scanf("%d %d %f",&product_code1,&unit_of_Product1,&Price_per_Product1 );
   scanf("%d %d %f",&product_code2,&unit_of_Product2,&Price_per_Product2 );
 
   Sum1 = Price_per_Product1*unit_of_Product1 ;
   Sum2 = Price_per_Product2*unit_of_Product2 ;

   printf("VALOR A PAGAR: R$ %.2f\n",Sum1+Sum2);
   return 0 ; 
  

}