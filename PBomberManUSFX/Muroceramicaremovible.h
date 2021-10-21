
#pragma once
#include "GameActor.h"

class Muroceramicaremovible :
    public GameActor
{
public:
    Muroceramicaremovible(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);
};

//class Muroceramicaremovible : public GameActor {
//protected:
//    TipoMuroceramicaremovible tipoMuroceramicaremovible;

    //int tiempoVisible;
    //int tiempoInvisible;

    //int contadorTiempoVisible;
    //int contadorTiempoInvisible;
    //int numeroMuroceramicaremovibleVisible;

    //TipoMuroceramicaremovible getTipoMuroceramicaremovible() { return tipoMuroceramicaremovible; }
    //int getTiempoVisible() { return tiempoVisible; }
    //int getTiempoInvisible() { return tiempoInvisible; }

    //void setTipoMuroceramicaremovible(TipoMuroceramicaremovible _tipoMuroceramicaremovible) { tipoMuroceramicaremovible = _tipoMuroceramicaremovible; }
    //void setTiempoVisible(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
    //void setTiempoInvisible(int _tiempoInvisible) { tiempoInvisible = _tiempoInvisible; }
    //void setTileActual(Tile* _tileNuevo) {};

