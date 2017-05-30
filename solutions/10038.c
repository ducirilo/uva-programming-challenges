/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
#include <stdlib.h>

int n, vetor[3000];

int jolly(int *v) {
    int cont = 1, aux = v[0];
        for (;cont <= aux-1; cont++) {
            if ( !( (abs(v[cont+1] - v[cont]) >=1) && (abs(v[cont+1] - v[cont]) <= v[0]-1) ) )
               return 0;    
        }     
        return 1;              
}

int main( void ) {
    int i=0;
    fflush(stdin);
   while ((scanf("%d",&vetor[0]) > 0)) {
          if (vetor[0] > 0) {
             for (i=1;i<=vetor[0];i++) {
                  scanf("%d",&vetor[i]);    
             }
             
             if ( vetor[0] == 1) {
                printf("Jolly\n");   
             } else {   
               if (jolly(vetor))
                  printf("Jolly\n");
                else
                    printf("Not jolly\n");
             }
          }   
   }    
    return 0;
}
