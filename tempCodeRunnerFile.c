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
     char name[10];
     float fixed_salary, persentis_ammount , total_Salary;
     scanf("%s\n",&name);
     scanf("%f\n",&fixed_salary);
     scanf("%f",&persentis_ammount);
     
     persentis_ammount =((float)15/100)*persentis_ammount;
     total_Salary = fixed_salary+persentis_ammount;
     printf("Total = R$ %.2f\n",total_Salary);
     return 0 ; 

}