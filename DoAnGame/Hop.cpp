#include "Hop.h"

void Hop::Render()
{
	animation_set->at(0)->Render(x, y);
	//RenderBoundingBox();
}

void Hop::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y ;
	r = x + HOP_BBOX_WIDTH;
	b = y;

}