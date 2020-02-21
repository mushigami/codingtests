#include <vector>
#include <stdexcept>
#include <iostream>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    //throw std::logic_error("Waiting to be implemented");
    int upper = sortedVector.size();
	int lower = 0;

    while(lower < upper)
    {
		middle = (lower + upper )/2;

        if(sortedVector[middle] < lessThan)
		{
			lower = middle+1;
		}			
		else
		{
			upper = middle;
		}
    }
	return lower;
}
    
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}