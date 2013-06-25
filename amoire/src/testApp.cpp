
//      aMoiré one               //
//      by Melladay              //
//      doomsyear                //


#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 800);
    ofBackground(255, 255, 255);
    ofEnableSmoothing();
    ofSetCircleResolution(100);
    
    for (int i=0; i<NUM_CIRCLES; i++) {
        ripple[i].setup(2*i);
        ripple_2[i].setup(2*i);
        ripple_3[i].setup(2*i);
        ripple_4[i].setup(2*i);
        ripple_5[i].setup(2*i);
        ripple_6[i].setup(2*i);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    for (int i=0; i<NUM_CIRCLES; i++) {
        ripple[i].update();
        ripple_2[i].update();
        ripple_3[i].update();
        ripple_4[i].update();
        ripple_5[i].update();
        ripple_6[i].update();        
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    ofNoFill();
    ofSetColor(0, 0, 0);
    for (int i=0; i<NUM_CIRCLES; i++) {
        ofPoint tempCenter;
        tempCenter.x = ofGetWidth()/2;
        tempCenter.y = ofGetHeight()/2;
        ripple[i].draw(tempCenter);
        
        ofPoint tempCenter2;
        tempCenter2.x = 200;
        tempCenter2.y = 200;
        ripple_2[i].draw(tempCenter2);
        
        ofPoint tempCenter3;
        tempCenter3.x = 200;
        tempCenter3.y = 600;
        ripple_3[i].draw(tempCenter3);
        
        ofPoint tempCenter4;
        tempCenter4.x = 600;
        tempCenter4.y = 200;
        ripple_4[i].draw(tempCenter4);
        
        ofPoint tempCenter5;
        tempCenter5.x = 600;
        tempCenter5.y = 600;
        ripple_5[i].draw(tempCenter5);
        

    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}