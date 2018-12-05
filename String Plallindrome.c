#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
char str[100];
int i, len, flag;

flag = 0;

scanf("%s",str);

len = strlen(str);//finding the length of given string

for(i = 0; i < len; i++)

{

  if(str[i] != str[len - i - 1])

  {

   flag = 1;//given string is pallindrome flag set to 1
   break;

  }

}

if(flag == 0)

{

  printf("1");//given string is pallindrome
}

else

{

printf("0");//given string is not pallindrome 

}

return 0;

}
