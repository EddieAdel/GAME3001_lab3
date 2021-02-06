#include "tile.h"
#include "Config.h"
#include "Util.h"
#include "TextureManager.h"
tile::tile()
{
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);
}

tile::~tile()
= default;

void tile::draw()
{
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
}

void tile::update()
{

}

void tile::clean()
{

}