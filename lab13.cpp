#include <iostream>
#include <vector>
#include <type_traits> // Replaces <concepts> for older C++

using namespace std;

// 1. Process data using traditional C++ loops and type constraints (Works everywhere)
template <typename T>
typename enable_if<is_integral<T>::value || is_floating_point<T>::value, vector<T>>::type
processData(const vector<T>& data)
{
    vector<T> result;
    
    // Traditional filter and transformation logic
    for (T value : data)
    {
        if (value > 0) // Filter: value > 0
        {
            result.push_back(value * 2); // Transform: value * 2
        }
    }
    
    return result;
}

int main()
{
    vector<int> data = {-5, 10, 20, -3, 15, 30};
    vector<int> result = processData(data);
    
    cout << "Original Data: ";
    for (int value : data)
    {
        cout << value << " ";
    }
    
    cout << "\nProcessed Data: ";
    for (int value : result)
    {
        cout << value << " ";
    }
    cout << endl;
    
    return 0;
}