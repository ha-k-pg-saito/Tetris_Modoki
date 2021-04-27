#ifndef Stage_h_
#define Stage_h_

class Stage
{
public:
	Stage():
	m_StageHandle(0),
		m_Score(0)
	{}
	~Stage() {}

public:
	void Draw();
	void Init();


private:
	//stage�̃}�b�v���
	static const int STAGE_HEIGHT;
	static const int STAGE_WIDTH;
	//�X�e�[�W���ۑ��p�n���h��
	int m_StageHandle;
	//�X�R�A�ۑ��ϐ�
	int m_Score;

};


#endif