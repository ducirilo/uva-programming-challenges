/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>

int linha, coluna;
char qtdminas;
typedef  struct tipo_mat {
						char math[101][101];
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

mat matriz;
 
int i, j, cont=0;
char auxchar, linhacampo[101];

 scanf("%d %d",&linha,&coluna);

 while ((linha >0 ) && (coluna > 0) ) {
    ++cont;

    for ( i = 1; i <= linha; i++) {
        scanf("%s",linhacampo);
        for (j = 0; j < coluna; j++) {
            matriz.math[i][j+1] = linhacampo[j];
        }
    }

	/*for ( i = 1; i <= linha; i++) {
		for (j = 1; j <= coluna+1; j++) {
				auxchar = getche();
            if (auxchar != 13) {
					matriz.math[i][j] = auxchar;
                    //minas (&matriz, i, j);
		    } else
               printf("\n");
      }
	}*/

  for ( i = 1; i <= linha; i++) {
		for (j = 1; j <= coluna; j++) {
           minas (&matriz, i, j);
		}
  }
    printf("Field #%d:\n",cont);
	for ( i = 1; i <= linha; i++) {
		for ( j = 1; j <= coluna; j++) {
         	
			if ( j == coluna) {
                if (matriz.math[i][j] == '*')
                    printf("%c\n",matriz.math[i][j]);
                else
                   printf("%d\n",matriz.math[i][j]);

			} else {
				if ( (j == coluna) && (i == linha) ) {
                       if (matriz.math[i][j] == '*') {
                          printf("%c\n",matriz.math[i][j]);

                       }
                       else {
                           printf("%d\n",matriz.math[i][j]);

                       }

                 } else {
                    if (matriz.math[i][j] == '*')
                        printf("%c",matriz.math[i][j]);
                    else
                       printf("%d",matriz.math[i][j]);

                 }
            }
      }
   }
	scanf("%d %d",&linha,&coluna);
    if (linha >0  && coluna > 0) {
      printf("\n");
    }

 }
  return 0;

}
