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
        int Employee_Number,Ammount;
        float  Working_Hour , SALARY;
        scanf("%d\n",&Employee_Number);
         scanf("%d\n",&Ammount);
          scanf("%f",&Working_Hour);

          SALARY = (float)Ammount*Working_Hour;

        printf("NUMBER = %d\n",Employee_Number);
        printf("SALARY = U$ %.2f\n",SALARY);

        return 0 ; 
        
}