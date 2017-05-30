/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>
int main(void){
int nr_input;
   scanf("%d", &nr_input);
int sum, diff;
int a1, b1, a2, b2, tmp;
bool flag1, flag2;
   for(int i=0;i<nr_input;i++){
      flag1 = flag2 = true;
      scanf("%d %d", &sum, &diff);
      if((sum+diff) % 2 != 0) {
         printf("impossible\n");
         continue;
      }
      a1 = (sum+diff)/2; b1 = a1-diff;
      if(b1<0)
         flag1 = false;
      else if(a1 < b1) {
         tmp = a1;
         a1 = b1;
         b1 = tmp;
      }
      b2 = (sum+diff)/2;
      a2 = b2-diff;
      if(a2<0)
         flag2 = false;
      else if(a2 < b2){
         tmp = a2;
         a2 = b2;
         b2 = tmp;
      } if(flag1)
         printf("%d %d\n", a1, b1);
      else if(flag2)
         printf("%d %d\n", a2, b2);
      else printf("impossible\n");
   }
   return 0;
}
