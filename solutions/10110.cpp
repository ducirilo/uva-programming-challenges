/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
#include <math.h>

int leitura(double *n) {
    scanf("%lf",n);
    
    if (*n == 0)
       return 0;
    else
        return 1;    
}

/*int luzes (unsigned long int *n) {
    int ultimo = 1;        
    unsigned long int i = 2, metade;
     if ((*n) == 1)
        return 1;
     if ( (*n) % 2 == 0)
        metade = (*n)/2;
     else
         metade = ((*n)/2) + 1;
         
     for ( ; i <= metade; i++) {
 
         if ((*n)%i == 0) {
            ultimo *= -1;           
         }        
     }
   ultimo *= -1;  
   return ultimo;     
}*/

int main( void ) {
    double n,m;

    while ( leitura(&n) ) {
          m = (int) sqrt(n);
          if (sqrt(n) - m == 0)
             printf("yes\n");
          else
              printf("no\n");                
    }
    return 0;    
}
