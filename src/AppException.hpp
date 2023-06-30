//
// Created by beafowl on 30/06/23.
//

#include <exception>
#include <string>

#ifndef MYPROJECT_APPEXCEPTION_HPP
#define MYPROJECT_APPEXCEPTION_HPP

namespace OgreTryhard {
    class AppException : public std::exception {
        public:
            explicit AppException(const std::string &message) : _message(message) {}

            [[nodiscard]] const char *what() const noexcept override {
                return _message.c_str();
            }

        private:
            std::string _message;
    };
}

#endif // MYPROJECT_APPEXCEPTION_HPP
