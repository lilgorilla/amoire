#pragma once

#include "ofMain.h"
#include "ofxControlPanel.h"
#include "movingCircle.h"

#define NUM_CIRCLES 100

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        Ripple ripple[NUM_CIRCLES];  
        Ripple ripple_2[NUM_CIRCLES];
        Ripple ripple_3[NUM_CIRCLES];
        Ripple ripple_4[NUM_CIRCLES];
        Ripple ripple_5[NUM_CIRCLES];
        Ripple ripple_6[NUM_CIRCLES];
        
        

    
};
