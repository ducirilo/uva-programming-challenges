/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
int main() {
 long int x,y,i,j, auxx, auxy;
 long int maior,cont;
    while (scanf("%d %d",&x,&y) == 2) {
      auxx = x;
      auxy = y;
      maior = 0;
      if (x > y) {
         i = y;
         y = x;
      } else
        i = x;
      for ( ;i<=y;i++) {
    	cont=1;
	    j=i;
	    while (j > 1) {
	      if ((j % 2) == 0) {
	         j /= 2;
	      } else {
	         j = 3*j + 1;
	      }
          cont++;
	    }
        maior = (cont>maior)?cont:maior;
      }
    printf("%ld %ld %ld\n",auxx,auxy,maior);
    fflush(stdin);
    }
  return 0;
}
