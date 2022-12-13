#include<iostream>
#include<vector>
#include<algorithm>




std::vector<char>alphabetStore()
{
    std::vector<char>alphabetHold(37);
    int num = 0;

    for(char c = 65; c <= 90; c++)
    {
        alphabetHold[num] = c;
        num++;
    }


    alphabetHold[26] = '0';
    alphabetHold[27] = '1';
    alphabetHold[28] = '2';
    alphabetHold[29] = '3';
    alphabetHold[30] = '4';
    alphabetHold[31] = '5';
    alphabetHold[32] = '6';
    alphabetHold[33] = '7';
    alphabetHold[34] = '8';
    alphabetHold[35] = '9';
    alphabetHold[36] = '_';

    return alphabetHold;
}


std::vector<int>convertMod(std::vector<int>arr, int M)
{
    std::vector<int>modArray(arr.size());
    // for(int i = 0; i < arr.size(); i++)
    // {
    //     modArray[i] = arr[i] % 41;
    // }

    for(int i = 0; i < arr.size(); i++)
    {
        for (int X = 1; X < M; X++)
            if (((arr[i] % M) * (X % M)) % M == 1)
                modArray[i] = X;
    }
    return modArray;
}


void showTheFlag(std::vector<char>alphabetHold, std::vector<int>modArray)
{
    std::vector<char>showTheText(23);
    int num = 0;
    for(int i = 0; i < modArray.size(); i++)
    {
        for(int j = 0; j < alphabetHold.size(); j++)
        {
            if(modArray[i] == j)
            {
                showTheText[num] = alphabetHold[j];
                num++;
            }
        }
    }

    for(auto val: showTheText)
    {
        std::cout << val << " ";
    }
    std::cout << '\n';
}


int main()
{

    std::vector<int>arr = {104, 85, 69, 354, 344, 50, 149, 65, 187, 420, 77, 127, 385, 318, 133, 72, 206, 236, 206, 83, 342, 206, 370};

    auto modArray = convertMod(arr, 41);
    for(auto num: modArray)
    {
        std::cout << num << " ";
    }
    std::cout << '\n';

    auto alphabetHold = alphabetStore();
    for(auto num: alphabetHold)
    {
        std::cout << num << " ";
    }
    std::cout << '\n';

    std::cout << '\n';

    showTheFlag(alphabetHold, modArray);


}