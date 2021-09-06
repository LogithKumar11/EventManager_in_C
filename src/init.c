#include<stdio.h>
#include "init.h"
void trigger_event(int);
void main(){
  int event,e,c=0;
  init_module();
  printf("enter the no. of events need to trigger");
  scanf("%d",&event);
  for(i=0;i<events;i++){
      printf("Ente the event no.");
      scanf('%d',e);
      trigger_event(e);
  }
}

void trigger_event(int e){
  struct module_info* temp = head;
  int op=0
  while(temp){
    if(if_set(p->event_bm,e)){
      temp->fptr();
      op=1;
    }
    temp=temp->next;
  }
  if(op!=1){
    printf("There is no modules interested for the given event!")
  }

}
