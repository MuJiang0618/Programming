//判断两棵二叉树的父子关系

struct BTNode
{
    int value;
    BTNode *lchild;
    BTNode *rchild;
};

//result的设置很奇妙
bool ChildTree(BTNode *parent,BTNode *child)
{
    bool result = false;
    if(parent == NULL || child == NULL) return false;

    if(parent->value == child->value) {
        result = Process(parent,child);
    }

    if(!result) {   //设置的result在这里解决了两个麻烦
        result = ChildTree(parent->lchild,child);  //找左节点
    }

    if(!result) {
        result = ChildTree(parent->rchild,child);   //找右节点
    }

    return result;
}

bool Process(BTNode *parent,BTNode *child)
{
    if(parent == NULL) {
        return false;
    }

    if(child == NULL) {
        return true;
    }

    if(parent->value != child->value) {    //这里不能改成 == 和 true，自己想为什么
        return false;
    }
    //如果相等,继续遍历左右子树的情况
    return Process(parent->lchild,child->lchild) && Process(parent->rchild,child->rchild);
}