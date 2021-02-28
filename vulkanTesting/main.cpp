#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include "vulkanrenderer.h"
#include <iostream>
#include "app.hpp"
#include <cstdlib>
#include <stdexcept>

int main() {
    //Initialize vulkan window
    lve::app testApp{};
    try{
        testApp.run();
    }catch (const std::exception &e){
        std::cout<<e.what()<<std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}
