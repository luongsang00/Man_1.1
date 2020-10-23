#include "Tru.h"

void Tru::Render()
{
	animation_set->at(0)->Render(x, y);
	//RenderBoundingBox();
}

void Tru::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + TRU_BBOX_WIDTH;
	b = y + TRU_BBOX_HEIGHT;
}