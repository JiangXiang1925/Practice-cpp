struct ListNode
{
    int m_nValue;
    ListNode* m_pNext;
};

//****************1****************
void PrintListReversing_Iteratively(ListNode* pHead)
{
    std::stack<ListNode>nodes;
    
    ListNode* pNode = pHead;
    while(pNode!=nullptr) 
    {
      nodes.push(pNode);
      pNode=pNode->m_pNext;
    }
    
    while(!nodes.empty())
    {
        pNode = nodes.top();
        printf("%d\t",pNode->m_nValue);
        nodes.pop();
    }
}
//****************2****************
void PrintListReversing_Iteratively(ListNode* pHead)
{
    if(pHead!=nullptr)
    {
        if(pHead->m_pNext!=nullptr)
        {
            PrintListReversing_Iteratively(pHead->m_pNext);
        }
        printf("%d\t",pHead->m_nValue);
    }
}
