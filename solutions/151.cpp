/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include<stdio.h>

int count(int *region,int N) {
int i,t=0;
   for(i=0;i<N;i++)
      if(!region[i]) {
         t++;
         if(t>1)
            return t;
      }
   return 1;
}

void main() {
int N,i,m,j,inc,tag;
int region[100];

   while(scanf("%d",&N)==1) {
      if(!N)
         break;
      tag=0;
      m=1;
      while(!tag) {
         j = 0;
         for(i=0;i<100;i++)
            region[i]=0;
         region[j]=1;
         j++;
         while(count(region,N)!= 1) {
            inc = m;
            for(i=0; i<inc;) {
               if(j == N){
                  j=0;
                  continue;
               }
               if(!region[j])
                  i++;
               if(j<N)
                  j++;
            }
            j--;
            region[j]=1;
         }
         for(i=0;i<N;i++)
            if(!region[i])
               break;
         if(i==12) {
            printf("%d\n",m);
            tag=1;
            break;
         }
         m++;
      }
   }
}
