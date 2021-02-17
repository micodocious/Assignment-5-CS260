#include "auto-sort.h"


//construct a linked list
auto_sort::auto_sort() {
    front = nullptr;
}
/*function to swap the nodes*/
struct node *swap(node *node_1, node *node_2){
    int temp = node_1->value;
    node_1->value = node_2->value;
    node_2->value = temp;
}
/*function to sort the list O(n^2) complexity for average and worst case, O(n) for best case*/ 
void auto_sort::sort(){
    int swapped;

    node *left_ptr; //this points tot he start of the list
    node *right_ptr; //this points to the end of the list
    do 
    {
        swapped = 0;
        left_ptr = front; 
        while(left_ptr->next != right_ptr)
        {
            if(left_ptr->value > left_ptr->next->value)
            {
                swap(left_ptr, left_ptr->next);
                swapped = 1;
            }
            left_ptr = left_ptr->next;
        }

        right_ptr = left_ptr; //the largest element is at the end of the list, assign that to right_ptr because you dont need to check a sorted list already.
    }while(swapped);


}
//O(1) because it is constant
void auto_sort::add(int value, int position) {
    node *new_node = new node();
    new_node->value = value;
    new_node->next = NULL;          
    if(position == 1) {             
        new_node->next = front;
        front = new_node;
        return;
    }
    node *new_node_2 = front;
    for(int i = 0; i < position - 2; i++){      
        new_node_2 = new_node_2->next;         
    }
    new_node->next = new_node_2->next;
    new_node_2->next = new_node;
}
//O(1) complexity because it is constant
void auto_sort::remove(int position) {
    node *temp_1 = front; 
    if(position==1){
        front = temp_1->next;
        free(temp_1);
        return;
    }

    int i;
    for(i = 0; i < position - 2; i++)
        temp_1 = temp_1->next;

    node *temp_2 = temp_1->next;
    temp_1->next = temp_2->next;
    free(temp_2);

}

void auto_sort::print(){
    node *temp = front;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}



