#include<stdio.h>
#define TOMMY
int  main(int argc, char * argv[])
{
  #ifdef TOMMY
  char c = -128;
  c += -1;
  printf("Hello C %d\r\n",c);
  printf("Parameter 1 is %s\r\n",argv[0]);
  #endif
  return 0; 
}
