#include <iostream>
#include <vector>

int main()
{
    // Create a vector
    std::vector<int> vec;

    // Adding elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Iterator functions
    auto begin = vec.begin();
    auto end = vec.end();
    auto rbegin = vec.rbegin();
    auto rend = vec.rend();

    // Printing elements using iterators
    std::cout << "Vector elements using begin() and end(): ";
    for (auto it = begin; it != end; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector elements using rbegin() and rend(): ";
    for (auto it = rbegin; it != rend; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Capacity functions
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Max size: " << vec.max_size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;  // return the element that vec can hold in its currently the allocated storage
    std::cout << "Is empty: " << std::boolalpha << vec.empty() << std::endl;

    // Resizing the vector
    vec.resize(5);
    std::cout << "Vector after resizing to 5 elements: ";
    for (const auto &elem : vec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
