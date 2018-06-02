
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double mycount = 0;


int main( int argc, char *argv[])
{

        int begin = 1;
        char linebuffer[BUFSIZ];
        strncpy( linebuffer, "" , BUFSIZ );
        char ptr[BUFSIZ];
        int j=0; int k; 
        int c ; 
        c = getchar();
        while( c != EOF )
        {
           ptr[j++] = c;
           begin = 0;

           if ( c == '\n' )
           {  
                begin = 1;
                ptr[j]='\0';

                 if ( ptr[0] != '/' ) 
                 if ( ptr[1] != '/' ) 
                 {
                   for(k=0; ptr[k]!='\0'; k++)
                      mycount++;
                 }

             // clean up
             strncpy( ptr, "", BUFSIZ );
             j = 0;
           }
           c = getchar();
      }

      printf( "Count: %g\n" , mycount );
      return 0;
 }



