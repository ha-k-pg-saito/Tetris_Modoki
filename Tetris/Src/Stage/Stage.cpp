#include"DxLib.h"
#include"Stage.h"

//static const �ϐ��̏�����
const int Stage::STAGE_HEIGHT = 10;
const int Stage::STAGE_WIDTH = 10;

void Stage::Init()
{

}
void Stage::Draw()
{
	//�X�e�[�W�Ŏg�p����e�N�X�`���̓ǂݍ���
	m_StageHandle = LoadGraph("Res/Frame/Frame.png");
	//�e�N�X�`�����g�債�Ă���
	DrawExtendGraph(30, -50, 750, 1080, m_StageHandle, TRUE);
	DrawExtendGraph(730, 10, 950, 220, m_StageHandle, TRUE);
}