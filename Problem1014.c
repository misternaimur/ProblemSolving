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
     int X ; 
     float Y ;
     float Avarage_Consumpition;

     scanf("%d",&X);
     scanf("%f",&Y);

     Avarage_Consumpition = (float)X/Y ;
    
     printf("%.3f km/l\n",Avarage_Consumpition);

     return 0 ; 
}