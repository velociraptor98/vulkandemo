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
namespace lve{
class app{
    static const int width = 800;
    static const int height = 600;
private:
    window activeWindow{width,height,"TESTING"};
public:
    void run();
};
}
#endif /* app_hpp */
