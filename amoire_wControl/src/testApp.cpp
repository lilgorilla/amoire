



#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetWindowShape(800, 800);
    ofBackground(255,255,255);
    increments = 20;
    
    
    panel.setup("MOIRE", 500, 0, 300, 300);
    panel.addPanel("VARIABLES", 1, false );
    panel.setWhichPanel("LINE");
    panel.addSlider("Increment Y", "VAL_INCREMENT_Y", 20, 0, 500, true);
    panel.addSlider("Increment X", "VAL_INCREMENT_X", 20, 0, 500, true);
    panel.addSlider("Diagonal", "VAL_DIAGONAL", 20, 0, 500, true);
    panel.addSlider("Radius", "VAL_RADIUS", 20, 0, 500, true);
    

    panel.loadSettings("settings.xml");
    
    ofSetCircleResolution(360);


    
}

//--------------------------------------------------------------
void testApp::update(){
    panel.update();
    increments.y = panel.getValueI("VAL_INCREMENT_Y");
    interval.y = ofGetHeight()/increments.y;
    
    increments.x = panel.getValueI("VAL_INCREMENT_X");
    interval.x = ofGetWidth()/increments.x;
    
    diagonal_increment = panel.getValueI("VAL_DIAGONAL");
    diagonal_interval = ofGetWidth()/diagonal_increment;
    
    
    radii = panel.getValueI("VAL_RADIUS");
    radius_max = ofGetWidth();
    radius = radius_max/radii;



}

//--------------------------------------------------------------
void testApp::draw(){
    panel.draw();
    
    ofNoFill();
    ofSetColor(0, 0, 0);
    ofSetLineWidth(1);
    for (int i=0; i<increments.y; i++) {
        ofLine(0, interval.y * i, ofGetWidth(), interval.y * i);
    }
    
    for (int k=0; k<increments.x; k++) {
        ofLine(interval.x * k, 0, interval.x * k, ofGetHeight());
    }
    
    for (int j=0; j<radii; j++) {
        ofCircle(ofGetWidth()/2, ofGetHeight()/2, radius * j);
    }
    
    for(int l=0; l<diagonal_increment; l++){
        ofLine(0, diagonal_interval * l , diagonal_interval * l, 0);
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
    panel.mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    panel.mousePressed(x, y, button);
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    panel.mouseReleased();
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