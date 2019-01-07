#include "graphic.h"

void pp2d_draw_texture_scale_blend(size_t id, int x, int y, float scaleX, float scaleY, u32 color)
{
	pp2d_texture_select(id, x, y);
	pp2d_texture_blend(color);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_part_blend(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, u32 color)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_blend(color);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_part_scale(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, float scaleX, float scaleY)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();
}

void pp2d_draw_texture_part_scale_blend(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, float scaleX, float scaleY, u32 color)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_blend(color);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_rotate_flip_blend(size_t id, int x, int y, float angle, flipType fliptype, u32 color)
{
	pp2d_texture_select(id, x, y);
	pp2d_texture_rotate(angle);
	pp2d_texture_flip(fliptype);
	pp2d_texture_blend(color);
	pp2d_texture_draw();
}

size_t homeicontex = 1;
size_t loadingbgtex = 2;
size_t topbgtex = 3;
size_t subbgtex = 4;
size_t buttontex = 5;
size_t smallbuttontex = 6;
size_t leftpagetex = 7;
size_t rightpagetex = 8;
size_t pagenumberframetex = 9;
size_t twinkletex1 = 10;
size_t twinkletex2 = 11;
size_t twinkletex3 = 12;
size_t logotex = 13;
size_t arrowtex = 14;
size_t updatertex = 15;
