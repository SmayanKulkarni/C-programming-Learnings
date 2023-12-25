#include <stdio.h>

int main(void)
{
    int nums[3] = {1,3,5};
    int target = 8;

    for(int i=0; i<4; i++)
    {
      if((nums[i]+nums[i+1]) == target)
      {
         printf("The incides int he given array are %d and %d", nums[i], nums[i+1]);
      }
     }
    return 0;
}