struct BinaryTreeNode
{
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};

BinaryTreeNode* Construct(int* preorder,int* inorder,int length)
{
    if(preorder == nullptr || inorder == nullptr || length<=0)
       return nullptr;
    return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
}
BinaryTreeNode* ConstructCore(int*startPreorder,int*endPreorder,int*startInorder,int*endInorder)
{
    //前序遍历的第一个数字是根节点的值
    int rootValue=startPreorder[0];
    BinaryTreeNode* root = new BinaryTreeNode()
    root->m_nValue = rootValue;
    root->m_pLeft = root->m_pRight = nullptr;
  
    if(startPreorder == endPreorder)
    {
        if(startInorder == endInorder && *startPreorder == *StartInorder)
            return root;
        else
            throw std::exception("Invalid input.");
    }
    //在中序遍历序列中找到根节点的值
    int* rootInorder = startInorder;
    while(rootInorder<=endInorder && *rootInorder!=rootValue)
        ++rootInorder;
    
    if(rootInorder == endInorder && *rootInorder!=rootValue)
        throw std::exception("Invalide Input.");
    
    int leftLength = rootInorder-startInorder;
    int* leftPreorderEnd = startPreorder+leftLength;
    if(leftLength>0)
    {
        //构建左子树
        root->m_pLeft = ConstructCore(startPreorder+1,leftPreorderEnd,startInorder,rootInorder-1);
    }
    if(left<endPreorder-startPreorder)
    {
        //构建right子树
        root->m_pRight = ConstructCore(leftPreorderEnd+1,endPreorderEnd,rootInorder+1,endInorder);
    }
    return root;
}
