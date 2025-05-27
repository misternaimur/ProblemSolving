#include<stdio.h>
int main()
{
     double A, B, C , pi = 3.14159 ;
     scanf ("%lf %lf %lf",&A,&B,&C);

     double Rectangled_Triangle = (1/2.0)*A*C;
     double Radius_circle = pi*(C*C);
     double Trapezium = (1/2.0)*(A+B)*C ;
     double Squard = B*B ;
     double Rectangle = A*B ;

     printf("TRIANGULO: %.3lf\n",Rectangled_Triangle);
     printf("CIRCULO: %.3lf\n",Radius_circle);
     printf("TRAPEZIO: %.3lf\n",Trapezium);
     printf("QUADRADO: %.3lf\n",Squard);
     printf("RETANGULO: %.3lf\n",Rectangle);
     
     return 0;
     
}