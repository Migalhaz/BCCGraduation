#include <iostream>
#include <iterator>

using value_type = int;

value_type *lbound(value_type *first, value_type *last, value_type value) 
{
    value_type *result = last;
    value_type *currentFirst = first;
    value_type *currentLast = last;
    
    while(currentFirst < currentLast)
    {
        value_type *mid = currentFirst + (std::distance(currentFirst, currentLast)/2);
        if (*mid == value)
        {
            result = mid;
            currentLast = mid;
            continue;
        }
        
        if (value > *mid)
        {
            currentFirst = mid+1;
        }
        else
        {
            currentLast = mid;
        }
    }


    return result;
}

value_type *ubound(value_type *first, value_type *last, value_type value) 
{
    value_type *result = last;
    value_type *currentFirst = first;
    value_type *currentLast = last;
    
    while(currentFirst < currentLast)
    {
        value_type *mid = currentFirst + (std::distance(currentFirst, currentLast)/2);
        if (*mid == value)
        {
            result = mid;
            currentFirst = mid+1;
            continue;
        }
        
        if (value > *mid)
        {
            currentFirst = mid+1;
        }
        else
        {
            currentLast = mid;
        }
    }


    return result+1;
}


int main()
{
    value_type a[]{1,1,2,3,4,4,4,4,5,5,7,8,8,9,10};
    value_type e;
    std::cin >> e;
    
    value_type *l = lbound(std::begin(a), std::end(a), e);
    value_type *u = ubound(std::begin(a), std::end(a), e);

    int index = std::distance(std::begin(a), l);
    std::cout << "Lower Bound " << index << ": " << *l << '\n';
    
    index = std::distance(std::begin(a), u);
    std::cout << "Upper Bound " << index << ": " << *u<< '\n';
    return 0;
}