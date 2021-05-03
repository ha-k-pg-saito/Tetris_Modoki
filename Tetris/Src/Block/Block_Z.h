#ifndef Block_Z_h_
#define Block_Z_h_

#include"BlockBase.h"

//ZšƒuƒƒbƒN
class Block_Z :public BlockBase
{
public:
	Block_Z() {}
	~Block_Z() {}

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