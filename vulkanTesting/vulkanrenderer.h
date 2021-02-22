//
//  vulkanrenderer.h
//  vulkanTesting
//
//  Created by KunalSingh on 14/02/21.
//

#include <GLFW/glfw3.h>
#include <stdexcept>
#ifndef vulkanrenderer_h
#define vulkanrenderer_h
class vulkanrenderer{
private:
    GLFWwindow *window();
public:
    vulkanrenderer();
    ~vulkanrenderer();
    void init();
};


#endif /* vulkanrenderer_h */
