#ifndef Block_h_
#define Block_h_

#include"../Utility/Vec2.h"

static const int BlockSize = 48;

class Block
{
public:
	Block(int grhandle):
	m_GrHandle(grhandle)
	{}
	~Block() {}

public:
	void Draw(Vec2 pos);

private:
	int m_GrHandle;


};

#endif