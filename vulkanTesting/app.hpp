//
//  app.hpp
//  vulkanTesting
//
//  Created by KunalSingh on 28/02/21.
//

#ifndef app_hpp
#define app_hpp

#include <stdio.h>
#include "window.h"
#include "pipeline.hpp"
namespace lve{
class app{
    static const int width = 800;
    static const int height = 600;
private:
    window activeWindow{width,height,"TESTING"};
    ///Users/kunal/Desktop/vulkanTest/vulkanTesting/vulkanTesting/shaders/simpleshader.frag.spv
    pipeline activePipeline{"simpleshader.vert.spv",
        "simpleshader.frag.spv"};
public:
    void run();
};
}
#endif /* app_hpp */
