#ifndef Block_S_h_
#define Block_S_h_

#include"BlockBase.h"

//S���u���b�N
class Block_S :public BlockBase
{
public:
	Block_S() {}
	~Block_S() {}

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