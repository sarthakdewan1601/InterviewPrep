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
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
        {
            return nullptr;
        }
        vector<int> vec;
        int i,j,k;
        for(auto &list: lists)
        {
            while(list != nullptr) 
            {
                vec.push_back(list->val);
                list=list->next;
            }
        }
        if(vec.size() == 0) return nullptr;
        sort(vec.begin(),vec.end());
        ListNode * head = new ListNode();
        ListNode *temp = head;
        for(i=0; i<vec.size()-1; i++) 
        {
            temp->val = vec[i];
            temp->next = new ListNode(); 
            temp = temp->next;
        }
        temp->val = vec[vec.size()-1];
        return head;
    }
};
