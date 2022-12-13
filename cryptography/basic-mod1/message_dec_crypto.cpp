#include<iostream>
#include<vector>
#include<string>



// void upperCaseAlphabet()
// {
//     for(char c = 65; c <= 90; c++)
//     {
//         std::cout << c << " ";
//     }
// }



int main()
{
    std::vector<int>arr = {91, 322, 57, 124, 40, 406, 272, 147, 239, 285, 353, 272, 77, 110, 296, 262, 299, 323, 255, 337, 150, 102};
    int modArr[22];

    for(int i = 0; i < arr.size(); i++)
    {
        // std::cout << arr[i] << " ";
        modArr[i] = arr[i] % 37;
    }

    // std::cout << "---------------------------------------------------------------All number after mod 37---------------------------------------------------------------";

    // for(int i = 0; i < 22; i++)
    // {
    //     std::cout << modArr[i] << " ";
    // }

    std::vector<char>finalChar(37);

    int num = 0;
    for(char c = 65; c <= 90; c++)
    {
        finalChar[num] = c;
        num++;
    }


    finalChar[26] = '0';
    finalChar[27] = '1';
    finalChar[28] = '2';
    finalChar[29] = '3';
    finalChar[30] = '4';
    finalChar[31] = '5';
    finalChar[32] = '6';
    finalChar[33] = '7';
    finalChar[34] = '8';
    finalChar[35] = '9';

    finalChar[36] = '_';

    // for(int i = 0; i < finalChar.size(); i++)
    // {
    //     std::cout << finalChar[i] << " ";
    // }

    std::vector<char>finalCharString(22);
    int val = 0;

    for(int i = 0; i < 22; i++)
    {
        for(int j = 0; j < finalChar.size(); j++)
        {
            if(modArr[i] == j)
            {
                finalCharString[val] = finalChar[j];
                val++;
            }
        }
    }



    for(int i = 0; i < finalCharString.size(); i++)
    {
        std::cout << finalCharString[i] << " ";
    }
    std::cout << '\n';


}