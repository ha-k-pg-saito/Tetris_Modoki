#ifndef Block_T_h_
#define Block_T_h_

#include"BlockBase.h"

//TšƒuƒƒbƒN
class Block_T :public BlockBase
{
public:
	Block_T() {}
	~Block_T() {}

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