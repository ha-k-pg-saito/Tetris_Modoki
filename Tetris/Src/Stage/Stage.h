#ifndef Stage_h_
#define Stage_h_

#include"../Block/Block.h"

class Stage
{
public:
	Stage():
	m_StageHandle(0),
		m_Score(0),
		m_Stage{nullptr}
	{}
	~Stage() {}

public:
	void Draw();
	void Init();

private:
	//stage�̃}�b�v���
	static const int StageHeight = 20;
	static const int StageWidth = 10;
	//�X�e�[�W���ۑ��p�n���h��
	int m_StageHandle;
	//�X�R�A�ۑ��ϐ�
	int m_Score;
	Block* m_Stage[StageHeight][StageWidth];

};


#endif