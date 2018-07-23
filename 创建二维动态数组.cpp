#include <iostream>
#include <vector>
using namespace std;
#define Max 50

void DynamicArray()
{
    int temp;
    int i,j;
    vector < vector <int> > array(Max);
    for(i = 0; true; i++) {
        for(j = 0; true; j++) {
            cin >> temp;
            if(temp <= 0){
                break;
            }
            array[i].push_back(temp);
        }

        if(temp == -1){   //如果输入-1，数组初始化完成，如果输入0，某一行初始化完成
            break;
        }
    }
	
	cout << endl;
    for(i = 0; i < array.size(); i++){
    	for(j = 0; j < array[i].size(); j++){
    		temp = array[i][j];
    		cout << temp << ' ';
    	}
    	cout << endl;
    }  
}
