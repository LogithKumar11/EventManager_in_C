#include <stdio.h>
int main ()
{
  int modules, events[100], temp, i = 0, c = 1,len=0;
  printf ("Enter the module_ID\t");
  scanf ("%d", &modules);
  while (c != 0)
    {
      printf ("no. of events interested[between 1-32]completed 0\t");
      scanf ("%d", &temp);
      c = temp;
        if (c != 0)
	    {
	        events[i] = temp;
	        i = i + 1;
	    }
        else
	    {
	        c = 0;
	    }
    }
    len=i;
    register_event(modules,events,len);
  return 0;
}

void register_event(int modules,int events[],int len){
    printf("Module id: %d -->\t",modules);  
    for (int j = 0; j < len; j++)
	{
	   printf ("%d\t", events[j]);
	}  
}