#include "Block.h"
#include"DxLib.h"

void Block::Draw(Vec2 pos)
{
	DrawGraph(pos.X, pos.Y, m_GrHandle, FALSE);
}
