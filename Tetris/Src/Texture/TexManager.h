#ifndef TexManager_h_
#define TexManager_h_

#include<map>
#include<string>

class TexManager
{
public:
	static TexManager* Instance()
	{
		static TexManager instance;
		return &instance;
	}

public:
	bool Load(const char* Filename, std::string keyword);
	int  GetTexture(std::string keyword);
	void Release(std::string keyword);
	void AllRelease();

private:
	std::map<std::string, int>m_TexList;

private:
	TexManager() {}
	~TexManager() { AllRelease(); }
};

#endif