#include "..\headers\entorno.h"

Entorno::Entorno(const int &dimension,const double &probabilityDirt)
{
    this->dimension = dimension;
    this->probabilityDirt = probabilityDirt;
    positionAgent = make_pair(0,0);
    generateDirt();
}

void Entorno::printMatrix() const {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (i == positionAgent.first && j == positionAgent.second) {
                cout << " S "<<" ";
            } else if (matrix[i][j]) {
                cout << " X "<< " ";
            } else {
                cout << " O "<< " ";
            }
        }
        cout << endl;
    }
}

void Entorno::generateDirt()
{
    for (int i = 0; i < dimension; i++)
    {
        vector<bool> row;
        for (int j = 0; j < dimension; j++)
        {
            double random = (double)rand() / RAND_MAX;
            if (random < probabilityDirt)
            {
                row.push_back(true);
            }
            else
            {
                row.push_back(false);
            }
        }
        matrix.push_back(row);
    }
}

void Entorno::cleanCell(pair<int,int> position)
{
    matrix[position.first][position.second] = false;
}

bool Entorno::isDirty(pair<int,int> position) const
{
    return matrix[position.first][position.second];
}

pair <int,int> Entorno::getPositionAgent() const
{
    return positionAgent;
}










