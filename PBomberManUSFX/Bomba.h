#pragma once
#include "GamePawn.h"


class Bomba :
    public GamePawn
{
public:
    Bomba(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo) override;

    void update();
    void render();
};
