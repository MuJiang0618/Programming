#Leetcode 258
class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if(num < 10):
          return num

        sum = num
        while(1):
          str_num = str(sum)   #要遍历整数的各位，先str化，再list
          list_num = list(str_num)
          sum = 0
          for i in list_num:
            sum += int(i)

          if(sum < 10):
            return sum