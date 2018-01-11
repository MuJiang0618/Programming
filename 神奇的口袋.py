#有一个神奇的口袋，用这个口袋可以变出一些物品，这些物品的总体积必须是40.John现在有n(1<=n<=20)个
#想要得到的物品，每个物品的体积分别为v1,v2,v3,v4......vn,John可以从这些物品中选择一些，如果选出的物体
#总体积是40，那么利用这个神奇的口袋他就可以得到这些物品，现在问，John有多少种不同的选择物品并能得到这
#些物品的方式

def Diversity(v,amount):   #求前amount个物品凑成v体积的种数
    #考虑边界条件
    if(v == 0):
        return 1
    if(amount <= 0):
        return 0
    return Diversity(v,amount - 1) + Diversity(v - volume[amount],amount - 1)

def main():
    amountinput=input('请输入John拥有的物品数:')
    amount=int(amountinput)
    for i in range(1, amount + 1):
        getinput = input('请输入第i个物品的体积:')   #把输入的内容转换成int存到volume[]里
        volume.insert(i,int(getinput))

    print( Diversity(40,amount) )

if __name__ == '__main__':
    volume=[]    #volume在Diversity函数中没有定义，所以要设置成全局变量
    main()