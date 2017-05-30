/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int v[11];

v num1, num2, soma;
int cont, flag, vcarry;

void zerar() {
     int i = 0;
     for (; i<11; i++)
         num1[i] = num2[i] = soma[i] = 0;    
}

int carry(v *n1, v *n2) {
    int pos;
    cont = flag = 0;
    
    for (pos = 10; pos >=0; pos--) {
        soma[pos] = (*n1)[pos] + (*n2)[pos];
        if (flag)
           soma[pos]++;
           
        if (soma[pos] > 9) {
           ++cont;
           flag = 1;
        } else {
          flag = 0;
        }                       
    }
   return cont;   
}

int leitura(v *numero1, v *numero2) {
     int aux, aux2;
     char cn1[11], cn2[11], *end;
     
     scanf("%s",cn1);
     for (aux = 11 - strlen(cn1),aux2 = 0; aux <= 10; aux++, aux2++) {
         (*numero1)[aux] = cn1[aux2] - 48;
     }       

     scanf("%s",cn2);
     for (aux = 11 - strlen(cn2), aux2 = 0; aux <= 10; aux++, aux2++) {
         (*numero2)[aux] = cn2[aux2] - 48;
     }                             
         
     if (strcmp(cn1,"0") == 0 && strcmp(cn2,"0") == 0)
        return 0;
     else
         return 1;
}

int main( void ) {
     zerar();
     while (leitura(&num1, &num2) == 1) {
           vcarry = carry(&num1, &num2);
           if (vcarry == 0)
              printf("No carry operation.\n");
           else if (vcarry == 1)
                printf("%d carry operation.\n",vcarry);
           else
               printf("%d carry operations.\n",vcarry);   
           zerar();      
     }
                       
     return 0;     
}
