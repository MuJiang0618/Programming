//反转单链表
struct LinkList
{
    int data;
    LinkList *next;
};


LinkList* Reverse_LinkList(LinkList *root)  //如果头结点为空？如果只有一个有效节点？
{
    if(root == NULL)  return NULL; //空节点
    LinkList *p_left = root->next;
    LinkList *p_mid = p_left->next
    if(p_mid == NULL) return root;  //只有一个节点
    LinkList *p_right = p_mid->next;

    while(p_mid != NULL) {
        p_mid->next = p_left;
        p_left = p_mid;
        if(p_right == NULL) {  //如果中间指针已经指向尾节点，则退出
            break;
        }
        p_mid = p_right;
        p_right = p_right->next;
    }

    return p_left;
}