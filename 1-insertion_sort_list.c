#include "sort.h"
/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
listint_t *temp;
int i;
if (!list)
{
return;
}
temp = *list;
while (temp)
{
while (temp)
{
if (temp->next)
{
if (temp->i > temp->next->i)
{
i = temp->i;
*(int *)&temp->i = temp->next->i;
*(int *)&temp->next->i = i;
temp = *list;
print_list(*list);
break;
}
}
temp = temp->next;
}
}
}
