//
//  app.cpp
//  vulkanTesting
//
//  Created by KunalSingh on 28/02/21.
//

#include "app.hpp"
namespace lve{
void app::run(){
    while(activeWindow.shouldClose() == false){
        glfwPollEvents();
    }
}
}

