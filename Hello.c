#include<stdio.h>
#define TOMMY
int  main(int argc, char * argv[])
{
  #ifdef TOMMY
  char c = -128;
  c += -1;
  printf("Hello C %d\r\n",c);
#endif
 return 0; 
}
