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
	//stageのマップ情報
	static const int STAGE_HEIGHT;
	static const int STAGE_WIDTH;
	//ステージ情報保存用ハンドル
	int m_StageHandle;
	//スコア保存変数
	int m_Score;

};


#endif