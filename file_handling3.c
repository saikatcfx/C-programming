#include<stdio.h>
void main(){

    FILE *fp;
    char ch[50];
    fp=fopen("myfilecfx.text","r");
    if(fp==NULL)
    {
        printf("unable to open the file :");
    }
    else {
      while(!feof(fp))
      {
        fgets(ch,50,fp);
        printf("%s",ch);
      }
    }
    fclose(fp);
}