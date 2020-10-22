#include "ChiVe.h"

void KhongVaCham::Render()
{
	animation_set->at(0)->Render(x, y);
	//RenderBoundingBox();
}

void KhongVaCham::GetBoundingBox(float& l, float& t, float& r, float& b)
{

}