//
//  window.h
//  vulkanTesting
//
//  Created by KunalSingh on 28/02/21.
//

#ifndef window_h
#define window_h
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>
#include <iostream>
namespace lve{
class window{
private:
    int width,height;
    std::string name;
    GLFWwindow *currentWindow;
public:
    void init();
    window(int width,int height,std::string name);
    ~window();
    bool shouldClose() {return glfwWindowShouldClose(currentWindow);}
    void createWindowSurface(VkInstance instance,VkSurfaceKHR *surface);
    window(const window &) = delete;
    window &operator= (const window &) = delete;
};
}
#endif /* window_h */
