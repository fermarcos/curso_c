//Extra 5
//Parra Arroyo Fernando Marcos
//Cifrado cesar

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_MSG 200


int main(int argc, char * argv[]) 
{ 
    char txt[MAX_MSG];
    int key,e,i;
    if(argc!=4  || !sscanf(argv[1],"%d",&key) || !sscanf(argv[3],"%d",&e) || (atoi(argv[3])!=0  && atoi(argv[3])!=1))
        printf("error\n USAGE: ./cesar k m e \nk int \nm \"text\"\ne [0|1]\n0 descifra\n1 cifra\n");
    else
    {
        strcpy(txt,argv[2]);
        printf("K= %d\n",key);
        printf("m= %s\n",txt);
        printf("e= %d\n",e);

        for(i = 0; txt[i]; i++)
            if(isalpha(txt[i]))
            {
                txt[i] = tolower(txt[i]);   //se pasan a minúsculas todas las letras
                if(e) txt[i] = (txt[i] -97 + key) % 26 + 97; //26 letras del alfabeto y 97 código ascii en decimal de la letra a
                else txt[i] = ( txt[i] - 97 - key+ 26 ) % 26 + 97;
            }     

        if(e) printf("Mensaje cifrado %s\n", txt);
        else printf("Mensaje descifrado: %s\n", txt);
    }
    return 0; 
}