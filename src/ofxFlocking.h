/*
 *  Boid.h
 *  boid
 *
 *  Created by Jeffrey Crouse on 3/29/10.
 *  Copyright 2010 Eyebeam. All rights reserved.
 *  Updated by Takara Hokao
 *	Updated by Andrew Monks
 *
 */

#pragma once

#include "ofMain.h"
#include "Boid.h"

class ofxFlocking {
public:
	void update();
	void draw();
	void addBoid();
	void addBoid(int x, int y);
    void removeBoid(int x, int y, int radius);
    int flockSize();
    	
	vector<Boid> boids;
};
