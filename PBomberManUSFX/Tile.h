#pragma once
#include <SDL.h>

//
//#include "Bomberman.h"
//#include "MuroCeramica.h"
//#include "MuroMetal.h"
//#include "SueloCesped.h"
//#include "Bomba.h"
//#include "Muroceramicaremovible.h"

class Bomberman;
class MuroCeramica;
class MuroMetal;
class SueloCesped;
class Bomba;
class Muroceramicaremovible;

class Tile
{
private:
	Bomberman* bomberman;
	MuroCeramica* muroCeramica;
	MuroMetal* muroMetal;
	SueloCesped* sueloCesped;
	Bomba* bomba;
	Muroceramicaremovible* muroceramicaremovible;

	int posicionTileX;
	int posicionTileY;

public:
	static const int anchoTile = 34;
	static const int altoTile = 34;

	// Constructores y destructores
	Tile();
	Tile(int _posicionTileX, int _posicionTileY);

	// Metodos accesores
	Bomberman* getBomberman() { return bomberman; }
	MuroCeramica* getMuroCeramica() { return muroCeramica; }
	MuroMetal* getMuroMetal() { return muroMetal; }
	SueloCesped* getSueloCesped() { return sueloCesped; }
	Bomba* getBomba() { return bomba; }
	Muroceramicaremovible* getMuroceramicaremovible() { return muroceramicaremovible; }
	int getPosicionTileX() { return posicionTileX; }
	int getPosicionTileY() { return posicionTileY; }

	void setBomberman(Bomberman* _bomberman) { bomberman = _bomberman; }
	void setMuroCeramica(MuroCeramica* _muroCeramica) { muroCeramica = _muroCeramica; }
	void setMuroMetal(MuroMetal* _muroMetal) { muroMetal = _muroMetal; }
	void setSueloCesped(SueloCesped* _sueloCesped) { sueloCesped = _sueloCesped; }
	void setBomba(Bomba* _bomba) { bomba = _bomba; }
	void setMuroceramicaremovible(Muroceramicaremovible* _muroceramicaremovible) { muroceramicaremovible = _muroceramicaremovible; }
	void setPosicionTileX(int _posicionTileX) { posicionTileX = _posicionTileX; }
	void setPosicionTileY(int _posicionTileY) { posicionTileY = _posicionTileY; }
};

