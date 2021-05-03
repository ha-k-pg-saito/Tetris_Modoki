#ifndef Block_O_h_
#define Block_O_h_

#include"BlockBase.h"

//OšƒuƒƒbƒN
class Block_O :public BlockBase
{
public:
	Block_O() {}
	~Block_O() {}

	int m_BlockData[5][5] =
	{
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0},
		{0,0,1,0,0}
	};
};

#endif