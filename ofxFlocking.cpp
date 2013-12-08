/*
 *  Boid.h
 *  boid
 *
 *  Created by Jeffrey Crouse on 3/29/10.
 *  Copyright 2010 Eyebeam. All rights reserved.
 *  Updated by Takara Hokao
 *  Updated by Andrew Monks
 *
 */

#include "ofxFlocking.h"

void ofxFlocking::update() {
    int i;
    for(i = 0; i < boids.size(); i++) {
        boids[i].update(boids);
    }
}

void ofxFlocking::draw() {
    int i;
    for(i = 0; i < boids.size(); i++) {
        boids[i].draw();
    }
}

void ofxFlocking::addBoid() {
    boids.push_back(Boid());
}

void ofxFlocking::addBoid(int x, int y) {
    boids.push_back(Boid(x, y));
}

void ofxFlocking::removeBoid(int x, int y, int radius) {
    int i;
    for (i=0; i<boids.size(); i++) {
        if(boids[i].isHit(x, y, radius)) {
            boids.erase(boids.begin()+i);
        }
    }
}

int ofxFlocking::flockSize() {
    return boids.size();
}