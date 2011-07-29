// Copyright (c) 2007, 2008, 2009 libmv authors.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#ifndef LIBMV_LOGGING_LOGGING_H
#define LIBMV_LOGGING_LOGGING_H

#if (defined WIN32 || defined _WIN32 || defined WINCE)
#include <iostream>
#define LOG(INFO) std::clog<<std::endl<<(INFO)
#define VLOG(INFO) LOG(INFO)
#define INFO "INFO"
#define FATAL "FATAL"
#define ERROR "ERROR"
#define WARNING "WARNING"
#define NUM_SEVERITIES "WARNING"
#define CHECK(exp) assert(exp);std::clog
#define CHECK_EQ(e1, e2) CHECK((e1) == (e2));std::clog
#define CHECK_GE(e1, e2) CHECK((e1) >= (e2));std::clog
#else
#include "third_party/glog/src/glog/logging.h"
#endif //(defined WIN32 || defined _WIN32 || defined WINCE) 

#define LG LOG(INFO)
#define V0 LOG(INFO)
#define V1 LOG(INFO)
#define V2 LOG(INFO)

#endif  // LIBMV_LOGGING_LOGGING_H
