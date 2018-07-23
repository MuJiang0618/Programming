#2018/05/20
#Leetcode 112
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if root.right != None or root.left != None:
            if root.left != None:
                left = Solution.hasPathSum(self, root.left, sum - root.val)
            if root.right != None:
                right = Solution.hasPathSum(self, root.right, sum - root.val)

            try:
                left
            except NameError:
                return right
            else:
                if left:
                    return True
                else:
                    try:
                        right
                    except NameError:
                        return False
                    else:
                        return right

        else:
            if root.val == sum:
                return True
            else:
                return False