#include "Muroceramicaremovible.h"

Muroceramicaremovible::Muroceramicaremovible(Texture* _textura, Tile* _tileActual) :GameActor(_textura, _tileActual)
{
	tileActual = _tileActual;

	if (tileActual != nullptr) {
		tileActual->setMuroceramicaremovible(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;

		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
}

void Muroceramicaremovible::setTileActual(Tile* _tileNuevo)
{
	if (tileActual != nullptr) {
		tileActual->setMuroceramicaremovible(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setMuroceramicaremovible(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
}

//visible = false;
//tiempoVisible = 100;
//tiempoInvisible = 150;
//contadorTiempoVisible = 0;
//contadorTiempoInvisible = 0;
//int numeroMuroceramicaremovibleVisible = 0;
