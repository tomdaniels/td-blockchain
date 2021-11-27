
   
#include "Blockchain.h"

int main()
{
    Blockchain MyCoin = Blockchain();

    cout << "Mining block 1..." << endl;
    MyCoin.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    MyCoin.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    MyCoin.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}