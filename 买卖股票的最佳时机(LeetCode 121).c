int maxProfit(int* prices, int pricesSize) {
    int min_in = prices[0], max_out = -1;
    int temp_in = -1;
    if (prices == NULL) return 0;

    for(int i = 1; i < pricesSize; i++) {
        if(max_out < 0) {   //如果还没有找到一对儿
            if (prices[i] < min_in) {
                min_in = prices[i];
            } else {
                max_out = prices[i];
            }
        }

        else {  //已经找到一对儿
            if (prices[i] > max_out)
                max_out = prices[i];

            else if (prices[i] < min_in)
                if (temp_in == -1) {
                    temp_in = prices[i];
                } else {
                    if (prices[i] < temp_in)
                        temp_in = prices[i];
                }
        }

        if (temp_in >= 0) {
            if ((prices[i] - temp_in) > (max_out - min_in)) {
                max_out = prices[i];
                min_in = temp_in;
            }
        }
    }

    return ((max_out - min_in) > 0)?(max_out - min_in):0;
}