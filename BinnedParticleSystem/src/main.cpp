#include "ofMain.h"
#include "testApp.h"

int main() {
	ofSetupOpenGL(1024, 1024, OF_WINDOW);
	ofRunApp(new testApp());
}
