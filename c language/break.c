#include<stdio.h>
int main(void)
{

	int inum;
	for(inum = 1; inum <= 10; inum++)
 {
 
 

      // skip remaining code in loop only if inum ==5
      if(inum == 5)
      break;
      printf("%d ", inum);
  }
      printf("\nused continue to skip printing the value 5\n");
      return 0;
  }
  
