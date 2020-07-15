#include<iostream>
#include "boost/circular_buffer.hpp"
#include "mysql/include/mysql.h"

int main(int argc, char *argv[])
{
   std::cout << "Hello World!" << std::endl;

   boost::circular_buffer<char> cb(3);

   cb.push_back(1);
   cb.push_back(2);
   cb.push_back(3);

   int size = cb.size();
   int capacity = cb.capacity();
   auto full = cb.full();
   auto reserve = cb.reserve();

   cb.set_capacity(10);
   reserve = cb.reserve();

   cb.push_back(100);
   int last = cb.at(2);

   //cb.resize(5);

//    auto hh = cb.size();
// 
//    auto a = cb.front();
//    cb.pop_front();
//    auto b = cb.front();
//    cb.pop_front();
//    auto c = cb.front();
//    cb.pop_front();
//    auto d = cb.front();
//    cb.pop_front();
//    auto e = cb.front();
//    cb.pop_front();
//    auto f = cb.front();
//    cb.pop_front();

   return 0;
}