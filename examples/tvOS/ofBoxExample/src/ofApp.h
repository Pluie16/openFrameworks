#pragma once

#include "ofxtvOS.h"

class ofApp : public ofxiOSApp {
	public:
		void setup();
		void update();
		void draw();
        void exit();
    
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);
		
        void controllerPressed(ofControllerEventArgs & event);
        void controllerReleased(ofControllerEventArgs & event);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
		
		ofImage ofLogo; // the OF logo
		ofLight light; // creates a light and enables lighting
		ofEasyCam cam; // add mouse controls for camera movement
};
