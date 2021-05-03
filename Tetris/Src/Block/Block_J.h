#ifndef Block_J_h_
#define Block_J_h_

#include"BlockBase.h"

//JšƒuƒƒbƒN
class Block_J :public BlockBase
{
public:
	Block_J() {}
	~Block_J() {}

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