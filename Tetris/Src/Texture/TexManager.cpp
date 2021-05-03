#include "TexManager.h"
#include"DxLib.h"

bool TexManager::Load(const char* Filename, std::string keyword)
{
	if (m_TexList.find(keyword) != m_TexList.end()) return true;

	int handle = LoadGraph(Filename); 
	
	if (-1==handle) return false;

	// �ǂݍ��݂����������� �����̃L�[���[�h�Ńn���h����ۑ�����
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
	// ��Ȃ瑁�����^�[��
	if (m_TexList.empty()) return;

	// �e�N�X�`���n���h�����ۑ�����Ă���ꏊ���w���Ă���C�e���[�^�[���擾
	auto itr = m_TexList.find(keyword);

	if (itr != m_TexList.end())
	{
		DeleteGraph(m_TexList[keyword]);
		m_TexList.erase(itr);
	}
}

void TexManager::AllRelease()
{
	// ��Ȃ瑁�����^�[��
	if (m_TexList.empty()) return;
	//�ǂݍ��񂾃e�N�X�`���f�[�^��������������
	InitGraph();
	m_TexList.clear();
}
