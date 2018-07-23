//两个链表的第一个公共节点（物理上），两个链表合为一个Y形
struct LinkNode
{
    int value;
    LinkNode *next;
};

LinkNode* First_PublicNode(LinkNode *p1,LinkNode *p2)
{
    //求出两个链表的长度
    int len1 = 0,len2 = 0;
    LinkNode *p3 = p1,p4 = p2;
    while(p3) {
        len1 ++;
        p3 = p3->next;
    }

    while(p4) {
        len1 ++;
        p4 = p4->next;
    }

    int distance = 0,counter = 0;
    if(len1 >= len2)  {
        distance = len1 - len2;
        while(counter < distance) {
            p3 = p3->next;
            counter ++;
        }
        p4 = p2;
    }

    else {
        distance = len2 - len1;
        while(counter < distance) {
            p4 = p4->next;
            counter ++;
        }
        p3 = p1;
    }

    while(p3->value != p4->value) {
        p3 = p3->next;
        p4 = p4->next;
    }
    return p3;
}