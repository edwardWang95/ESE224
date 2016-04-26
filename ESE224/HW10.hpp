//
//  HW10.hpp
//  ESE224
//
//  Created by Edward Wang on 4/25/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef HW10_hpp
#define HW10_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace HW10{
    namespace chapter9{
        class test{
        private:
            
        public:
            void execute();
        };
        /*
         Write a function that receives a pointer to a character string and a character. The function should return the number of times that the character occurred in the string. Assume that the function has the prototype statement
         */
        class Q18{
        private:
            
        public:
            void execute();
            int charcnt(char *ptr, char c);
        };
        
        /*
         Write a function that receives a pointer to a character string and returns the num- ber of repeated characters that occur in the string. For example, the string “Mississippi” has three repeated characters. Do not count repeated blanks in the string. If a character occurs more than two times, it should still only count as one repeated character; thus, “hisssss” would have only one repeated character. Assume that the function has the prototype statement
         */
        class Q19{
        private:
            
        public:
            void execute();
            int repeat(char *ptr);
        };
    }
}

#endif /* HW10_hpp */
