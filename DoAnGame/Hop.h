#pragma once
#include "GameObject.h"

#define HOP_BBOX_WIDTH  16
#define HOP_BBOX_HEIGHT 16

class Hop : public CGameObject
{
public:
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};