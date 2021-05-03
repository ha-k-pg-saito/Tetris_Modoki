#ifndef BlockBase_h_
#define BlockBase_h_

class BlockBase 
{
public:
	BlockBase():
	m_GrHandle(-1)
	{}
	virtual ~BlockBase() {}



private:
	int m_GrHandle;
	int m_BlockPos;

};

#endif