#include "GachHoi.h"

GachHoi::GachHoi()
{
	SetState(GACHHOI_STATE_CHUACHAM);
}

void GachHoi::Render()
{
	
	int ani = GACHHOI_ANI_CHUACHAM;
	if (state == GACHHOI_STATE_CHUACHAM) {
		ani = GACHHOI_ANI_DACHAM;
	}
	

	RenderBoundingBox();
	animation_set->at(ani)->Render(x, y);
	//animation_set->at(0)->Render(x, y);

	//RenderBoundingBox();
}

void GachHoi::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + GACHHOI_BBOX_WIDTH;
	b = y + GACHHOI_BBOX_HEIGHT;
}


void GachHoi::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case GACHHOI_STATE_CHUACHAM:
		break;
	case GACHHOI_STATE_DACHAM:
		break;
	}

}