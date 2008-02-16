#ifndef __MAPUI_H
#define __MAPUI_H

#include "gamecontent/map.h"

class MapUI {
	public:
		MapUI();
		~MapUI();

		void renderMap();

		void setPos(int x, int y) { m_x = x; m_y = y; }
		void setSize(int w, int h) { m_w = w; m_h = h; }


	private:
		int m_x, m_y;
		int m_w, m_h;

	protected:
		void drawTileEffects(Tile* tile, int screenx, int screeny, float scale, uint32_t tile_height);
		int getMinZ();
};

#endif