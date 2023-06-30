//
// Created by beafowl on 30/06/23.
//

#include <OGRE/Ogre.h>
#include <OgreInput.h>

#ifndef MYPROJECT_EVENTS_HPP
#define MYPROJECT_EVENTS_HPP

namespace OgreTryhard{
    class events : public OgreBites::InputListener
    {
            /**
             * @brief Called when a key is pressed
             * @param evt The event
             * @return true if the event was handled, false otherwise
             */
             bool keyPressed(const OgreBites::KeyboardEvent &evt) override;
    };
}

#endif // MYPROJECT_EVENTS_HPP
