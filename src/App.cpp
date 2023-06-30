//
// Created by beafowl on 30/06/23.
//

#include <iostream>
#include <OGRE/Ogre.h>
#include <OgreOverlayManager.h>
#include "App.hpp"
#include "events.hpp"
#include "AppException.hpp"

namespace OgreTryhard{
    App::App(const Ogre::String &appName) : OgreBites::ApplicationContext(appName) {
        addInputListener(new events());
        this->initApp();
        auto *myScnMgr = this->getRoot()->createSceneManager("DefaultSceneManager", "MyMenu");

        try {
            this->initialiseApp();
        } catch (const Ogre::Exception &e) {
            std::cerr << "An exception has occurred: " << e.getFullDescription() << std::endl;
            this->closeApp();
            throw AppException("An exception has occurred: " + std::string(e.getFullDescription()));
        }
    }

    App::~App() = default;

    void App::initialiseApp() {
        auto *myScnMgr = this->getRoot()->createSceneManager("DefaultSceneManager", "MyMenu");
        myScnMgr->addRenderQueueListener(reinterpret_cast<Ogre::RenderQueueListener *>(mOverlaySystem));
        Ogre::OverlayManager  const &myOverlayManager = Ogre::OverlayManager::getSingleton();
    }
}
