#include<stdio.h>
#include<string.h>

void main()
{
  char str1[] = "Milkyway";
  char str2[] = "Ayush";
  char str3[11];


  int result=0;
  for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
      if(str1[i]!=str2[i])
      {
        result = str1[i]-str2[i];
        break;
      }
    }
  printf("string comparison result=%d\n",result);


  int i,j;
  for(i=0;str1[i]!='\0';j++)
    {
      str3[i]=str1[i];
    }
  for(j=0;str2[j]!='\0';j++)
    {
      str3[i+j]=str2[j];
    }
  str3[i+j]='\0';
  printf("string concatenation result=%s\n",str3);


  int len1=0,len2=0;
  while(str1[len1]!='\0')
    {
      len1++;
    }
  while(str2[len2]!='\0')
    {
      len2++;
    }
  int result2=0;
  if(len1<len2||len1>len2)
  {
    result2=1;
  }
  else
  {
    result2=0;
  }
  printf("length comparison=%d\n",result2);
}
