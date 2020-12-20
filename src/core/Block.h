#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

class Block{
public:
	string sPrevHash; // hash of previous block

	// & is used for reference, this is done to improve efficiency and save memory
	Block(uint32_t nIndexIn, const string &sDataIn); 

	string GetHash();

	void MineBlock(uint32_t nDifficulty);

private:
	uint32_t _nIndex;
	int64_t _nNonce;
	string _sData;
	string _sHash;
	time_t _tTime;

	string _CalculateHash() const;
};