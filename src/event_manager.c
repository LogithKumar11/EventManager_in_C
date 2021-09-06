#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct Module_info{
    int module_id;
    bool event_bm;
    struct Event_Manager* next;
}*head;

void insert(int module_id,bool event_bm)
{
    struct Module_info* module = (struct Module_info *) malloc(sizeof(struct Module_info));
    module->module_id = module_id;
    module->event_bm = event_bm;
    module->next = NULL;
    
    if(head==NULL){
        head = module;
    }
    else{
        module->next = head;
        head = module;
    }
    
}
void search(int module_id)
{
    struct Module_info* temp = head;
    while(temp!=NULL){
        if(temp->module_id==module_id){
            printf("module_id: %d\n", temp->module_id);
            printf("Event bitmap: %d\n", temp->event_bm);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d is not found !!!\n", module_id);
}
void display()
{
    struct Module_info* temp = head;
    while(temp!=NULL){
        
        printf("Moduler: %d\n", temp->module_id);
        printf("event_bm: %d\n", temp->event_bm);
        temp = temp->next;
        
    }
}


int main(){
    void insert(2,0);
    void insert(3,1);
    void display();
    return 0;
}