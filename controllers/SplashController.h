#ifndef _SPLASH_CONTROLLER_H_
#define _SPLASH_CONTROLLER_H_

#include <system/controller/Controller.h>
#include <windows.h>
#include <gtk/gtk.h>
#include <thread>

using namespace tuber;

class SplashController: public Controller{
public:
	SplashController(Application* app,ControllerStateManager* stateManager,ViewManager* viewManager) : Controller(app,stateManager,viewManager){}
	void onCreate(Bundle* package);
	void onStart();
	void onPause();
};

#endif
