#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    int width;
    int height;
    
    ofSetWindowShape(800, 800);
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofSetBackgroundColor(0, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetCircleResolution(100);
    ofDrawCircle(400, 400, 400);
    ofNoFill();
    
    
    ofDrawLine(100, 140, 100, 660);
    ofDrawLine(100, 200, 100, 200);
    ofDrawLine(200, 55, 200, 750);
    ofDrawLine(300, 20, 300, 785);
    ofDrawLine(400, 0, 400, 800);
    ofDrawLine(600, 55, 600, 750);
    ofDrawLine(500, 20, 500, 785);
    ofDrawLine(680, 120, 680, 680);
    ofDrawLine(750, 200, 750, 600);
    /*ofDrawLine(400, 0, 400, 800);
    ofDrawLine(400, 0, 400, 800);*/
    
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);

    ofBeginShape();
    ofVertex(150, 400);
    ofVertex(600,400);
    ofVertex(650, 600);
    ofVertex(250, 600);
    ofEndShape();
    
    
    ofDrawLine(160, 425, 605, 425);
    ofDrawLine(175, 450, 612, 450);
    ofDrawLine(190, 480, 620, 480);
    ofDrawLine(200, 500, 625, 500);
    ofDrawLine(215, 525, 630, 525);
    ofDrawLine(230, 550, 635, 550);
    ofDrawLine(240, 580, 645, 580);
    
}

//--------------------------------------------------------------
