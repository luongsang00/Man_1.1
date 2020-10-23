#pragma once
#include "GameObject.h"

#define TRU_BBOX_WIDTH  16
#define TRU_BBOX_HEIGHT 16

class Tru : public CGameObject
{
public:
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};
