#include"DxLib.h"
#include"Stage.h"
#include"../Texture/TexManager.h"

void Stage::Init()
{
	//ステージを全て０で初期化する
	ZeroMemory(&m_Stage, 0, sizeof(m_Stage));
	m_StageHandle = TexManager::Instance()->GetTexture("Frame");
}

void Stage::Draw()
{
	static const int StageOffSetX = 144;
	static const int StageOffSetY = 48;
	for (int y=0;y<StageHeight;++y)
	{
		for (int x=0;x< StageWidth;++x)
		{
			//!m_Stageも==nullptrも意味は同じ
			if (!m_Stage[y][x]) continue;
			m_Stage[y][x]->Draw({ static_cast<float>(x * BlockSize+ StageOffSetX), static_cast<float>(y * BlockSize+ StageOffSetY) });
		}
	}
	//テクスチャを拡大している
	DrawExtendGraph(65, -110, 704, 1170, m_StageHandle, TRUE);
	DrawExtendGraph(730, 10, 950, 220, m_StageHandle, TRUE);
}