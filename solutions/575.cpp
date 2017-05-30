/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
double j;
char str[1000];
long l,i,sb=0;
   while(gets(str)) {
      l=strlen(str);
      if(l==1)
         if(str[0]-'0' == 0 )
            break; sb=0;
      j = double(l);
      for(i=0;i<l;i++) {
         sb+=(str[i]-'0')*(pow(2,j)-1); j--;
      }
      printf("%ld\n",sb);
   }
}
