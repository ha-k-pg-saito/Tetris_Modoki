#ifndef Block_I_h_
#define Block_I_h_

#include"BlockBase.h"

//IšƒuƒƒbƒN
class Block_I :public BlockBase
{
public:
	Block_I() {}
	~Block_I() {}

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