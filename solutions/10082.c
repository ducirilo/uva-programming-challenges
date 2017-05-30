/* Carlos Eduardo Cirilo
   Kelly Kaoru Tanikawa
   Renato Mitsuo Umino */
   
#include <stdio.h>

typedef char string[100];

int leitura(string *s) {
    if (gets(*s) != NULL)
       return 1;
    else
        return 0;
}

void decodifica(string *s) {
     int i = 0;
     while ((*s)[i] != '\0') {
           if ((*s)[i] != ' ') {
              switch((*s)[i]) {
                           case '1': (*s)[i] = '`'; break;
                           case '2': case '3': case '4':
                           case '5': case '6': case '7':
                           case '8': case '9': (*s)[i]--; break;
                           case '0': (*s)[i] = '9'; break;
                           case '-': (*s)[i] = '0'; break;
                           case '=': (*s)[i] = '-'; break;
                           case 'W': (*s)[i] = 'Q'; break;
                           case 'E': (*s)[i] = 'W'; break;
                           case 'R': (*s)[i] = 'E'; break;
                           case 'T': (*s)[i] = 'R'; break;
                           case 'Y': (*s)[i] = 'T'; break;
                           case 'U': (*s)[i] = 'Y'; break;
                           case 'I': (*s)[i] = 'U'; break;
                           case 'O': (*s)[i] = 'I'; break;
                           case 'P': (*s)[i] = 'O'; break;
                           case '[': (*s)[i] = 'P'; break;
                           case ']': (*s)[i] = '['; break;
                           case '\\': (*s)[i] = ']'; break;
                           case 'S': (*s)[i] = 'A'; break;
                           case 'D': (*s)[i] = 'S'; break;
                           case 'F': (*s)[i] = 'D'; break;
                           case 'G': (*s)[i] = 'F'; break;
                           case 'H': (*s)[i] = 'G'; break;
                           case 'J': (*s)[i] = 'H'; break;
                           case 'K': (*s)[i] = 'J'; break;
                           case 'L': (*s)[i] = 'K'; break;
                           case ';': (*s)[i] = 'L'; break;
                           case '\'': (*s)[i] = ';'; break;
                           case 'X': (*s)[i] = 'Z'; break;
                           case 'C': (*s)[i] = 'X'; break;
                           case 'V': (*s)[i] = 'C'; break;
                           case 'B': (*s)[i] = 'V'; break;
                           case 'N': (*s)[i] = 'B'; break;
                           case 'M': (*s)[i] = 'N'; break;
                           case ',': (*s)[i] = 'M'; break;
                           case '.': (*s)[i] = ','; break;
                           case '/': (*s)[i] = '.'; break;
              }
            }
            ++i;
     }
     return;
}

int main()
{
    string s;

    while (leitura(&s)) {
          decodifica(&s);
          printf("%s\n",s);
    }
    return 0;
}
