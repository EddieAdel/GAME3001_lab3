#pragma once
#ifndef _TILE_
#define _TILE_
#include "DisplayObject.h"

class tile : public DisplayObject
{
public:
	// Constructor
	tile();

	// Destructor
	~tile();

	// Life-Cyle functions
	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (_TILE_) */