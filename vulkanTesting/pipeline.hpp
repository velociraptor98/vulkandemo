//
//  pipeline.hpp
//  
//
//  Created by KunalSingh on 28/02/21.
//

#ifndef pipeline_hpp
#define pipeline_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
namespace lve{
class pipeline{
private:
    static std::vector<char> readFile(const std::string& filePath);
    void createGraphicsPipeline(const std::string& vertFilePath,const std::string& fragFilePath);
public:
    pipeline(const std::string& vertFilePath,const std::string& fragFilePath);
    ~pipeline();
};
}
#endif /* pipeline_hpp */
