#include <stdexcept>
#include <iostream>
#include <deque>

class TrainComposition
{
public:
    
    std::deque<int> myTrain;

    void attachWagonFromLeft(int wagonId)
    {
        //throw std::logic_error("Waiting to be implemented");
        myTrain.push_front(wagonId);
    }

    void attachWagonFromRight(int wagonId)
    {
        //throw std::logic_error("Waiting to be implemented");
        myTrain.push_back(wagonId);
    }

    int detachWagonFromLeft()
    {
        //throw std::logic_error("Waiting to be implemented");
        int detachedWagon = myTrain.front();
        myTrain.pop_front();
        return detachedWagon;
    }

    int detachWagonFromRight()
    {
        //throw std::logic_error("Waiting to be implemented");
        int detachedWagon = myTrain.back();
        myTrain.pop_back();
        return detachedWagon;
    }
};

#ifndef RunTests
int main()
{
    TrainComposition tree;
    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    std::cout << tree.detachWagonFromRight() << "\n"; // 7 
    std::cout << tree.detachWagonFromLeft(); // 13
}
#endif