#pragma once

struct mouse_info
{
	POINT pos;

	POINT press_pos;
	POINT hold_pos;

	bool is_pressed;
	bool is_holding; // used to know of its holding/moving smth

	bool needs_reset;
};

static mouse_info g_mouse;

struct bounds
{
	bounds()
	{
		this->x = 0;
		this->y = 0;
		this->w = 0;
		this->h = 0;
	}
	bounds( int x, int y, int w, int h )
	{
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	bounds( int x, int y )
	{
		this->x = x;
		this->y = y;
		this->w = 0;
		this->h = 0;
	}

	int x, y, w, h;
};
