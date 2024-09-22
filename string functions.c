#include <stdio.h>
#include <string.h>
int main(void)
{
    // function 1 --> string length 
     char name[]= "Shreyans Behera";
     printf("%d\n",strlen(name));
     //function 2 --> cocatenate strings
     char name1[]="Shreyans ";
     char name2[]="Behera";
     strcat(name1,name2);
     printf("%s\n",name1);
     // function 3 --> copying strings
     char str1[]= "shreyans behera";
     char str2[]= "";
     strcpy(str2,str1);
     printf("%s\n",str2);
     // function 4 --> comparing length of strings
     char str3[]="shreyans behera";
     char str4[]="sudhansu behera";
     char str5[]="sanghamitra das";
     printf("%d\n",strcmp(str3,str4));
     printf("%d\n",strcmp(str3,str5));

}


