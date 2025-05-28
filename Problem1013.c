/*
   _____  .__         __                  _______         .__                      
  /     \ |__| ______/  |_  ___________   \      \ _____  |__| _____  __ _________ 
 /  \ /  \|  |/  ___|   __\/ __ \_  __ \  /   |   \\__  \ |  |/     \|  |  \_  __ \
/    Y    \  |\___ \ |  | \  ___/|  | \/ /    |    \/ __ \|  |  Y Y  \  |  /|  | \/
\____|__  /__/____  >|__|  \___  >__|    \____|__  (____  /__|__|_|  /____/ |__|   
        \/        \/           \/                \/     \/         \/              

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, Mainor;
    scanf("%d %d %d", &a, &b, &c);

    Mainor = (a + b + abs(a - b)) / 2;
    Mainor = (Mainor + c + abs(Mainor - c)) / 2;

    printf("%d eh o maior\n", Mainor);

    return 0;
}