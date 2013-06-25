//
//  circle.cpp
//  amoiré
//


#include <iostream>
#include "movingCircle.h"


//--------------------------------------------------------------
void Ripple::setup(float _radius ){
    direction = .01;
    radius = _radius;
}

void Ripple::update(){
    if (radius > 395 || radius < 1) {
        direction *= -1;
    }
    radius += direction;
}

void Ripple::draw(ofPoint _center){
    center = _center;
    ofNoFill();
    ofSetColor(0, 0, 0);
    
    ofCircle(center.x, center.y, radius);
}