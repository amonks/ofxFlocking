# ofxFlocking

I updated ofxFlocking to work on mavericks in openFrameworks 0.8.0

[website](http://endurativemod.es/ofx-flocking)

[github](https://github.com/amonks/ofxFlocking)

## installation

Copy this folder into [your openframeworks folder/addons

## usage

to make the example project, I used the project generator to create a project and included the addon.

### testapp.h

In the blank project, I added 

	#include "ofxFlocking.h"

to the beginning of `testApp.h`, and added 

	ofxFlocking flock;

in the bottom of hte testApp class.

### testApp.cpp

I then I changed the following two functions in `testApp.cpp`

setup

	void testApp::setup(){
	    for (int i = startCount; i > 0; i--) {
	        flock.addBoid();
	    }
	}

mouseReleased

	void testApp::mouseReleased(int x, int y, int button){
		ofLog(OF_LOG_NOTICE, ofToString(button));
		switch(button) {
			case 0: // left mouse:
				flock.addBoid(x, y);
				break;
			case 2: // right mouse
				flock.removeBoid(x, y, 500);
				break;
			default:
				flock.addBoid(x, y);
				break;
		}
		flock.addBoid(x, y);
	}
