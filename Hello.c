#include<stdio.h>
#define TOMMY
int  main(int argc, char * argv[])
{
  #ifdef TOMMY
  char c = -128;
  c += -1;
  printf("Hello C %d\r\n",c);
  printf("Parameter 1 is %s\r\n2 is %s\r\n",argv[0],argv[1]);
  #endif
  //__int64 o = 10;
  float f = 1.0;
  float ff = 1.1;
  if(f==ff)
  {
	  printf("equal\n");
  }
  else{
	  printf("no equal\n");
  }
  long long i=5;
  int n=6,m=7;
  int const * ci = &n;
  int * const cc = &m;
  printf("sized of int:%ld\r\n",sizeof(i));
  printf("i address is %p, i = %lld\n",&i,i);

  printf("m address is %p, m=%d\n",&m,m);
  printf("n addressi is %p, n = %d\n",&n,n);
  printf("ci address is %p, ci = %d\n",ci,*ci);
  ci = &m;
  printf("ci new address is %p, ci = %d\n",ci,*ci);
  printf("cc address is %p, cc = %d\n",cc,*cc);
  *cc = n;

  printf("cc  new address is %p, cc = %d\n",cc,*cc);
  printf("m address is %p, m = %d\n",&m,m);
  return 0; 
}
