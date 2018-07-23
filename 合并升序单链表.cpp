//合并两个升序的单链表

struct LinkList
{
    int value;
    LinkList *next;
};

LinkList* Merge_sorted_LinkList(LinkList *root1,LinkList *root2)
{
    if(root1 == NULL && root2 == NULL) return NULL;

    if(roo1 == NULL && root2 != NULL) return root2;

    if(roo1 != NULL && root2 = NULL) return root1;

    //两个节点都不为空时
    LinkList *Merged_HeadNode = NULL;
    if(root1->value <= root2->value) {
        Merged_HeadNode = root1;
        Merged_HeadNode->next = Merge_sorted_LinkList(root1->next, root2);
    }

    else {
        Merged_HeadNode = root2;
        Merged_HeadNode->next = Merge_sorted_LinkList(root1, root2->next);
    }

    return Merged_HeadNode;
}