//
//  circle.h
//  amoiré
//


#ifndef moire_circle_h
#define moire_circle_h

#include "ofMain.h"

class Ripple{
    public:
    void setup(float _radius );
    void update();
    void draw(ofPoint _center);
    
    float radius; 
    float direction;
    ofPoint center;
    
};

#endif
