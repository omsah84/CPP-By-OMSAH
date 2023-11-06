#include <bits/stdc++.h>
#include <utility> // for std::pair
using namespace std;
int main()
{
    // pair<int, int> arrayMap[] = {
    //     {7, 3},
    //     {8, 2},
    //     {7, 1},
    //     {23, 4}};

    // size_t arraySize = sizeof(arrayMap) / sizeof(arrayMap[0]);
    // for (size_t i = 0; i < arraySize; i++)
    // {
    //     size_t array1 = sizeof(arrayMap) / sizeof(arrayMap[0]);
    //     for (size_t j = 0; j < array1; j++)
    //     {
    //         if (arrayMap[i].second < arrayMap[j].second)
    //         {
    //             swap(arrayMap[i].second, arrayMap[j].second);
    //         }
    //     }
    // }

    // for (size_t i = 0; i < arraySize; ++i)
    // {
    //     std::cout << "Pair " << i << ": First=" << arrayMap[i].first << ", Second=" << arrayMap[i].second << std::endl;
    // }

    map<string, int> myMap = {
        {"apple", 3},
        {"banana", 1},
        {"orange", 2}};

    // Copy elements from the map to a vector of pairs
    vector<pair<string, int>> vectorPairs(myMap.begin(), myMap.end());

    sort(vectorPairs.begin(), vectorPairs.end(), [](const auto &lhs, const auto &rhs)
         { return lhs.second < rhs.second; });

    cout<<vectorPairs;

    return 0;
}
