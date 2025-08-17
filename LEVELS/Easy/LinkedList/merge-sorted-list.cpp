/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    // 1.dummy node make
    // 2.take temp pointer to it
    // 3. till both the lists are not nll
    // 4.if l1 data ls 2 k data se less
    // 5.dummy k next me l1 daal do // dummy ka next// list ka next
    // 6. l2 aa jaegi
    //  7. return temp ka next
    ListNode *dummy = new ListNode();
    ListNode *temp = dummy;
    while (list1 != NULL && list2 != NULL)
    {
      if (list1->val < list2->val)
      {
        dummy->next = list1;
        dummy = dummy->next;
        list1 = list1->next;
      }
      else
      {
        dummy->next = list2;
        dummy = dummy->next;
        list2 = list2->next;
      }
    }
    if (list1 == NULL)
    {
      dummy->next = list2;
    }
    if (list2 == NULL)
    {
      dummy->next = list1;
    }
    return temp->next;
  }
};