#include <stdio.h>
#include <string.h>


int main() {
  char arr[100];
  char arrr[100];
for(int a = 0; a < 100; a++) {
  printf("print:");
    fgets(arr,100,stdin);
    printf("%s",arr);
  if(strcmp(arr,"loop()\n") == 0) {
    for(int i = 0; i > -1; i++) {
  printf("print:\n");  
    }
  }
  else if(strcmp(arr,"plus()\n") == 0) {
  for(int d = 0; d > -1; d++) {
    int a = 0; int b = 0;
    printf("ENTER FIRST NUMBER:");
    scanf("%d", &a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);
int c = a+b;
    printf("%d\n",c);
  }
  }  
  else if(strcmp(arr,"times()\n") == 0) {
    for(int r = 0; r > -1; r++) {
      int a; int b;
      printf("ENTER FIRST NUMBER:");
      scanf("%d", &a);
      printf("ENTER SECOND NUMBER:");
      scanf("%d",&b);
      int c = a * b;
      printf("%d\n", c);
     if (a == 0 || b == 0) {
       printf("END");
       break;
     }
    }
  }
}
  return 0;
}

