#include "TexManager.h"
#include"DxLib.h"

bool TexManager::Load(const char* Filename, std::string keyword)
{
	if (m_TexList.find(keyword) != m_TexList.end()) return true;

	int handle = LoadGraph(Filename); 
	
	if (-1==handle) return false;

	// 読み込みが成功したら 引数のキーワードでハンドルを保存する
	m_TexList[keyword] = handle;

	return true;
}

int TexManager::GetTexture(std::string keyword)
{
	if (m_TexList.find(keyword) == m_TexList.end()) return -1;
	return m_TexList[keyword];
}

void TexManager::Release(std::string keyword)
{
	// 空なら早期リターン
	if (m_TexList.empty()) return;

	// テクスチャハンドルが保存されている場所を指しているイテレーターを取得
	auto itr = m_TexList.find(keyword);

	if (itr != m_TexList.end())
	{
		DeleteGraph(m_TexList[keyword]);
		m_TexList.erase(itr);
	}
}

void TexManager::AllRelease()
{
	// 空なら早期リターン
	if (m_TexList.empty()) return;
	//読み込んだテクスチャデータをメモリから解放
	InitGraph();
	m_TexList.clear();
}
