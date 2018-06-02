

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
        int c_prev1 = 0;
        int c_prev2 = 0;
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
                   {
                     if ( ptr[k] == ' ' ) 
                     {
                         if ( ptr[k-1] != ' ' )
                            putchar( ptr[k] );
                     }
                     else if ( ptr[k] != '\n' ) 
                         putchar( ptr[k] );

                     }

                     if ( c_prev1 == '.' )
                     if ( c == '\n' )
                     {
                        putchar( ' ' );
                     }

                     if ( ( c_prev1 >= 'a' ) && ( c_prev1 <= 'z' ))
                     if ( c == '\n' )
                     {
                        putchar( ' ' );
                     }

                     if ( c_prev1 == ',' )
                     if ( c == '\n' )
                     {
                        putchar( ' ' );
                     }

                     if ( c_prev1 == '\n' )
                     if ( c == '\n' )
                     {
                        putchar( '\n' );
                        putchar( '\n' );
                     }
                }

             // clean up
             strncpy( ptr, "", BUFSIZ );
             j = 0;
           }
           c_prev2 = c_prev1; 
           c_prev1 = c;
           c = getchar();
      }

      return 0;
 }



