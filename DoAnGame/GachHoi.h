#pragma once

#include "GameObject.h"

#define KOOPAS_WALKING_SPEED 0.03f;

#define GACHHOI_BBOX_WIDTH 16
#define GACHHOI_BBOX_HEIGHT 16

#define GACHHOI_STATE_CHUACHAM 100
#define GACHHOI_STATE_DACHAM   200

#define GACHHOI_ANI_CHUACHAM 0
#define GACHHOI_ANI_DACHAM 1

class GachHoi : public CGameObject
{
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Render();

public:
	GachHoi();
	virtual void SetState(int state);
};