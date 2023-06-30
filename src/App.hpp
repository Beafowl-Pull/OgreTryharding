//
// Created by beafowl on 30/06/23.
//

#include <OgreApplicationContext.h>

#ifndef MYPROJECT_APP_HPP
#define MYPROJECT_APP_HPP

namespace OgreTryhard{
    class App : public OgreBites::ApplicationContext
    {
        public:
            /**
             * @brief Construct a new App object
             * @param appName The name of the application
             */
            explicit App(const Ogre::String &appName = "OgreTryhard");

            /**
             * @brief Destroy the App object
             */
            ~App() override;

            App(const App &) = delete;
            App &operator=(const App &) = delete;
            App(App &&) = delete;
            App &operator=(App &&) = delete;

            /**
             * @brief Initialise the application
             * @throw AppException if an error occurred
             */
            void initialiseApp();
    };
}

#endif // MYPROJECT_APP_HPP
