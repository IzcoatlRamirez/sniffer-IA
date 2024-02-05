#ifndef ENTORNO_H
#define ENTORNO_H
#include <iostream>
#include <vector>

using namespace std;

class Entorno {

public:

    Entorno(const int &dimension,const double &probabilityDirt);

    void moveAgent(pair <int,int>);
    void printMatrix() const;
    void generateDirt();
    void cleanCell(pair<int,int> position);
    bool isDirty(pair<int,int> position) const;
    pair <int,int> getPositionAgent() const;    

private:

    int dimension;
    double probabilityDirt;
    pair <int,int> positionAgent;
    vector<vector<bool>> matrix;
    
};

#endif // ENTORNO_H