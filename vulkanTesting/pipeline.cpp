//
//  pipeline.cpp
//  
//
//  Created by KunalSingh on 28/02/21.
//

#include "pipeline.hpp"
#include <fstream>
#include <stdexcept>
namespace lve{
std::vector<char> pipeline::readFile(const std::string& filePath){
    std::ifstream file(filePath,std::ios::ate | std::ios::binary);
    if(!file.is_open()){
        throw std::runtime_error("failed to open file");
    }
    size_t fileSize = static_cast<size_t>(file.tellg());
    std::vector<char> buffer(fileSize);
    file.seekg(0);
    file.read(buffer.data(), fileSize);
    return buffer;
}
void pipeline::createGraphicsPipeline(const std::string &vertFilePath, const std::string &fragFilePath){
    auto vertCode = readFile(vertFilePath);
    auto fragCode = readFile(fragFilePath);
    std::cout<<vertCode.size()<<std::endl;
    std::cout<<fragCode.size()<<std::endl;
}
pipeline::pipeline(const std::string& vertFilePath,const std::string& fragFilePath){
    createGraphicsPipeline(vertFilePath,fragFilePath);
}
pipeline::~pipeline(){
    ;
}
}
