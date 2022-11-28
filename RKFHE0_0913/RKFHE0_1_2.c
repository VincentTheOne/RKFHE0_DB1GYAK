#include <stdio.h>
#include <stdlib.h>

void fileiras();

int main()
{
    fileiras();
    return 0;
}

void fileiras(){
    FILE *fp;
    char ch;
    char fnev[50];
    printf("Filenév: ");
    scanf("%s", fnev);
    fp = fopen(fnev, "w");
    printf("Üzenet: ");
    while( (ch=getchar()) != '#'){
        putc(ch, fp);
    }
    fclose(fp);

    fp = fopen(fnev, "r");
    while( (ch = getc(fp)) != EOF){
        printf("%c",toupper(ch));
    }
    fclose(fp);
    return 0;
}