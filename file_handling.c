#include<stdio.h>
void main (){
    FILE *fp;
    char a[100];
    printf("enter your name:");
    gets(a);
    fp=fopen("myfilecfx.text","w");
    if (fp==NULL){
        printf("unable to create athe file\n.");

    }
    else {
        printf("file create successfully\n");
        fprintf(fp,"%s",a);
        fclose(fp);
    }
}