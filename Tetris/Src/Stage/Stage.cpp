#include"DxLib.h"
#include"Stage.h"

//static const 変数の初期化
const int Stage::STAGE_HEIGHT = 10;
const int Stage::STAGE_WIDTH = 10;

void Stage::Init()
{

}
void Stage::Draw()
{
	//ステージで使用するテクスチャの読み込み
	m_StageHandle = LoadGraph("Res/Frame/Frame.png");
	//テクスチャを拡大している
	DrawExtendGraph(30, -50, 750, 1080, m_StageHandle, TRUE);
	DrawExtendGraph(730, 10, 950, 220, m_StageHandle, TRUE);
}