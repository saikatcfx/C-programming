#include<stdio.h>
void main(){
    FILE *fp;
    char c[50];
    printf("enter any sentence");
    scanf("%[^\n]s",&c);
    fp=fopen("myfilecfx.text","w");
    if(fp==NULL){
        printf("unable to create the file\n");
    }
    else
    {
        fprintf(fp,"%s\n",c);
        printf("%s\n",c);
        fclose(fp);
    }
    
}