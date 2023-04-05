#include "lists.h"
/**
 *  * sum_listint - sum all all the data (n) of a linked list
 *   * @head: input
 *    * Return: summation of all node values
*/
int sum_listint(listint_t *head)/*Prototype*/
{
size_t sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
