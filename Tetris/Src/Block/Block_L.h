#ifndef Block_L_h_
#define Block_L_h_

#include"BlockBase.h"

//LšƒuƒƒbƒN
class Block_L : public BlockBase
{
public:
	Block_L() {}
	~Block_L() {}

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