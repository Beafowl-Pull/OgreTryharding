//
// Created by beafowl on 30/06/23.
//

#include "events.hpp"

namespace OgreTryhard {
    bool OgreTryhard::events::keyPressed(const OgreBites::KeyboardEvent &evt)
    {
        if (evt.keysym.sym == OgreBites::SDLK_ESCAPE) {
            Ogre::Root::getSingleton().queueEndRendering();
        }
        return true;
    }
}
