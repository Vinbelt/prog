#include <iostream>
using namespace std;


const int n_alabanzas = 4;
string alabanzas[n_alabanzas] = {"Que buena persona eres!", "Que inteligente eres!", "Que guapo eres!", "Que astuto eres!"};

int main(void)
{
    for (int i = 0; i < 1299; i++)
    {   
       cout << alabanzas[i%n_alabanzas] << endl;
    }
}