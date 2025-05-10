#include <iostream>
#include <set> 

int main()
{
    std::set<int> missingPages;
    int pageCount;
    int digitalPageCount;
    std::cin >> pageCount >> digitalPageCount;
    
    for (int i = 1; i < pageCount + 1; ++i)
    {
        missingPages.insert(i);
    }

    for (int i = 0; i < digitalPageCount; ++i)
    {
        int digitalPage;
        std::cin >> digitalPage;
        missingPages.erase(digitalPage);
    }

    for (int page : missingPages)
    {
        std::cout << page << ' ';
    }

    return 0;
}