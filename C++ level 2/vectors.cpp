#include <iostream>
using namespace std;
#include <vector>
    int reductionOperations(vector<int>& nums) {
        int count = 0;
        for (int j = 0; j < 1000000000; j++) 
        {
            int c = 1;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] == nums[i + 1])
                    c++;
                // return count;
            }
            if (c == nums.size())
                return count;
            int max = -1, nextMax = 1, maxIndex = 0;
            // this loop to find the max and the next maxt
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > max) {
                    max = nums[i];
                    maxIndex = i;
                }
            }
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > nextMax && nums[i] < max){
                    nextMax = nums[i];
                    // nextMaxIndex = i;
                }
            }
            nums[maxIndex] = nextMax;
            count++;
            // for (int i = 0; i < nums.size(); i++)
            // {
            //     cout << nums[i] << '\t';
            // }
            //     cout << '\n' << "count is:" << count << '\n';
            
        }
        return count;
    }
int main() {
    // vector<int> v = {5,6,2,8,4}; 
    // // reductionOperations(v);
    // auto it = v.begin();
    // // cout << *it;
    // for (int it: v)
    //     cout << it << '\t';
    // int a = 'z' - 25;
    // cout << char(a);
    int t;
    cin >> t;
    string input;
    bool cond = false;
    for (int i = 0; i < t; i++)
    {
        cin >> input;
        cond = false;
        for (int j = 0; j < input.length() - 1; j++)
        {
            if (input[j] != input[j + 1])
            {
                cout << "YES" << '\n';
                string str = input;
                char temp;
                temp = str[j + 1];
                str[j + 1] = str[j];
                str[j] = temp;
                cout << str << endl;
                cond = true;
                break;
            }
            cond = false;
        }
        if (!cond)
            cout << "NO" << '\n';
    }
    return 0;

}
/*
    int SIZE, SIZE2;
    cin >> SIZE >> SIZE2;
    long long arr[SIZE], arr2[SIZE2];
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < SIZE2; i++)
    {
        cin >> arr2[i];
    }
    int count = 0;
    int i = 0, j = 0;
    for (; i < SIZE; )
    {
        if (arr[i] == arr[j])
            count++;
        if (arr[i] == arr[i + 1])
        {
            i++;
            continue;
        }
        i++;
        j++;
    }
    
    
*/
