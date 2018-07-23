//求二叉树路径和为k的所有路径

struct Way
{
    int ways[];
    int len_of_way;
    int last_index;
};

void Print_Ways(BTNode *p,int k,Way temp)
{
    if(p == NULL || k <= 0) return;

    int index = temp.last_index;
    int len = temp.len_of_way;
    if(p->value + len <= k) {
        temp.ways[index] = p->value;
        temp.last_index ++;
        temp.len_of_way += p->value;
        if(temp.len_of_way == k) {
            for(int i = 0; i <= temp.last_index; i++) {
                printf("%d ",temp.ways[i]);
            }
            printf("\n");
            return;
        }
    }

    else
        return;

    Print_Ways(p->lchild,k,temp);
    Print_Ways(p->rchild,k,temp);
}
