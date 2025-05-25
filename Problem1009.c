/*
   _____  .__         __                  _______         .__                      
  /     \ |__| ______/  |_  ___________   \      \ _____  |__| _____  __ _________ 
 /  \ /  \|  |/  ___|   __\/ __ \_  __ \  /   |   \\__  \ |  |/     \|  |  \_  __ \
/    Y    \  |\___ \ |  | \  ___/|  | \/ /    |    \/ __ \|  |  Y Y  \  |  /|  | \/
\____|__  /__/____  >|__|  \___  >__|    \____|__  (____  /__|__|_|  /____/ |__|   
        \/        \/           \/                \/     \/         \/              

*/


#include <stdio.h>

int main() {
    char name[100];
    double fixed_salary, sales_amount, total_salary;

    scanf("%s", name);
    scanf("%lf", &fixed_salary);
    scanf("%lf", &sales_amount);

    total_salary = fixed_salary + (0.15 * sales_amount);

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}


