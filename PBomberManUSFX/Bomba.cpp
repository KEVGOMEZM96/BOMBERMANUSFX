#include "Bomba.h"

Bomba::Bomba(Texture* _textura, Tile* _tileActual) :GamePawn(_textura, _tileActual)
{

	tileActual = _tileActual;
	tileSiguiente = nullptr;

	if (tileActual != nullptr) {
		tileActual->setBomba(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	visible =true ;

}


void Bomba::setTileActual(Tile* _tileNuevo)
{
	if (tileActual != nullptr) {
		tileActual->setBomba(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setBomba(this);

		posicionX = tileActual->getPosicionTileX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionTileY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
}
void Bomba::update()
{

	if (keyboardInput->IsKeyOn(botonBomba)) {
		visible = true;
     }
	else visible = false;
}

void Bomba::render()
{
	if (visible == true) {
		GamePawn::render();
	}
}
