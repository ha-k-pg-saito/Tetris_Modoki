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
	//stageのマップ情報
	static const int StageHeight = 20;
	static const int StageWidth = 10;
	//ステージ情報保存用ハンドル
	int m_StageHandle;
	//スコア保存変数
	int m_Score;
	Block* m_Stage[StageHeight][StageWidth];

};


#endif