/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
void main(){
int qtd, x,y, i, j, soma;
   scanf("%d",&qtd);
   for(i=1;i<=qtd;i++){
      scanf("%d %d", &x,&y);
      soma = 0;
      for(j=x;j<=y;j++){
         if(j % 2 != 0){
            soma+=j;
         }
      }
      printf("Case %d: %d\n", i, soma);
   }
}
