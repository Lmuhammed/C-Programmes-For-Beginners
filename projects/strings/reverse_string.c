#include <stdio.h>
#include <string.h>

int main(int argc , char ** argv) {
if (argc <2)
{
printf("Usage : %s stringToreverse \n",argv[0]);
printf("Usage : %s abcd \n",argv[0]);
return -1;
}
int arv1_len=strlen (argv[1]);
char str[arv1_len];
strcpy (str,argv[1]);
char  tempS[arv1_len];
strcpy (tempS,str);
printf("srt before reverse :%s",str);
int j=0;
for(arv1_len ; arv1_len>=0 ; arv1_len--)
{
str[j]=tempS[arv1_len-1];
j++;
}
str[j]='\0';
printf("\nsrt after reverse :%s\n",str);
  return 0;
}
