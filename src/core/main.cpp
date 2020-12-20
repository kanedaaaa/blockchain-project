#include "blockchain.h"

int main(){
	Blockchain bChain = Blockchain();

	std::cout << "maining block..." << std::endl;
	bChain.AddBlock(Block(1, "Block 1 Data"));
}