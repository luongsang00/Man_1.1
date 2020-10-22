#pragma once
#include "GameObject.h"

#define VE_BBOX_WIDTH  16
#define VE_BBOX_HEIGHT 16

class KhongVaCham : public CGameObject
{
public:
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};