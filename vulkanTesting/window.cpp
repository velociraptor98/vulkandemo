//
//  window.cpp
//  vulkanTesting
//
//  Created by KunalSingh on 28/02/21.
//

#include <stdio.h>
#include "window.h"

namespace lve{
window::window(int width,int height,std::string name) : width(width),height(height),name(name){
    this->init();
}
window::~window(){
    //cleanup code
}

void window::init(){
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE);
    currentWindow = glfwCreateWindow(width,height,name.c_str(),nullptr,nullptr);
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    std::cout << extensionCount << " extensions supported\n";
}
void window::createWindowSurface(VkInstance instance,VkSurfaceKHR *surface){
    if(glfwCreateWindowSurface(instance, currentWindow, nullptr, surface)!= VK_SUCCESS){
        throw std::runtime_error("failed to create windows surface");
    }
}

}
