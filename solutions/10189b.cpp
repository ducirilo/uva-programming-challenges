/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
#include <malloc.h>

int linha, coluna;
char qtdminas;
typedef  struct tipo_mat {
                              int l,c;
                              char math[101][101];
							  struct tipo_mat *prox;
					} mat;

void minas (mat *mina, int x, int y) {
	
	  if ((*mina).math[x][y] == '.') {
        qtdminas = 0;

      if ( y < coluna )  {
			if ( (*mina).math[x][y+1] == '*' ) //leste
				++qtdminas;
      }

      if ( x < linha ) {
			if ( (*mina).math[x+1][y] == '*') //sul
				++qtdminas;
      }

      if ( y > 1 ) {
			if ( (*mina).math[x][y-1] == '*' ) //oeste
				++qtdminas;
      }

      if ( x > 1) {
			if ( (*mina).math[x-1][y] == '*' ) //norte
				++qtdminas;
      }

      if ( (x > 1) && (y > 1)) {
			if ( (*mina).math[x-1][y-1] == '*' ) //noroeste
				++qtdminas;
      }

      if ( (y < coluna) && (x > 1) ) {
			if ( (*mina).math[x-1][y+1] == '*' ) //nordeste
				++qtdminas;
      }

      if ( (x < linha) && ( y < coluna) ) {
			if ( (*mina).math[x+1][y+1] == '*' ) //sudeste
				++qtdminas;
      }

      if ( ( x < linha) && ( y > 1) ) {
			if ( (*mina).math[x+1][y-1] == '*' ) //sudoeste
				++qtdminas;
      }

	(*mina).math[x][y] = qtdminas;
  }

}

int main( void ) {

mat *matriz, *inicio, *auxpont, *fim;
int i, j, cont=0;
char auxchar, linhacampo[101];

 scanf("%u %u",&linha,&coluna);

 while ((linha >0 ) && (coluna > 0) ) {
    ++cont;
    matriz = (mat*) malloc(sizeof(mat));

    if (cont == 1) {
		inicio = matriz;
		fim = matriz;
	 }

     (*matriz).l = linha;
	  (*matriz).c = coluna;
	  (*matriz).prox = NULL;

     if ( cont != 1) {
		fim->prox = matriz;
		fim = matriz;
	  }

	/*for ( i = 1; i <= linha; i++) {
		for (j = 1; j <= coluna+1; j++) {
				auxchar = getche();
            if (auxchar != 13) {
					(*matriz).math[i][j] = auxchar;
                    //minas (&matriz, i, j);
			 }
      }
	}*/

    for ( i = 1; i <= linha; i++) {
        scanf("%s",linhacampo);
        for (j = 0; j < coluna; j++) {
            (*matriz).math[i][j+1] = linhacampo[j];
        }
    }

  for ( i = 1; i <= linha; i++) {
		for (j = 1; j <= coluna; j++) {
           minas (matriz, i, j);
		}
  }


	scanf("%u %u",&linha,&coluna);
	fflush(stdin);
 }

  auxpont = inicio;
  cont = 1;

  while ( auxpont != NULL) {

		printf("Field #%u:\n",cont);
	for ( i = 1; i <= (*auxpont).l; i++) {
		for ( j = 1; j <= (*auxpont).c; j++) {

			if ( j == (*auxpont).c) {
                if ((*auxpont).math[i][j] == '*')
                    printf("%c\n",(*auxpont).math[i][j]);
                else
                   printf("%d\n",(*auxpont).math[i][j]);

			} else {
				if ( (j == (*auxpont).c) && (i == (*auxpont).l) ) {
                       if ((*auxpont).math[i][j] == '*') {
                          printf("%c\n",(*auxpont).math[i][j]);

                       }
                       else {
                           printf("%d\n",(*auxpont).math[i][j]);

                       }

                 } else {
                    if ((*auxpont).math[i][j] == '*')
                        printf("%c",(*auxpont).math[i][j]);
                    else
							  printf("%d",(*auxpont).math[i][j]);

                 }
            }
      }
   }
	if ((*auxpont).l > 0 && (*auxpont).c > 0)
      printf("\n");

	auxpont = (*auxpont).prox;
	cont++;

  }
  return (0);
}
