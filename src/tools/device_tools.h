/*
 * memory_tools.h
 *
 *  Created on: 28.04.2010
 *      Author: gerharda
 */

#ifndef MEMORY_TOOLS_H_
#define MEMORY_TOOLS_H_

#include <string>
#include <stdexcept>
#include <iostream>
#include <cstring>
#include <cuda.h>
#include <cuda_runtime.h>
//#include <cutil_inline.h>
#include <vector>
#include "cuv_general.hpp"

#include "exception_helper.hpp"

namespace cuv{
	int getFreeDeviceMemory(int dev_idx=0);
	int getMaxDeviceMemory(int dev_idx=0);
	void useDevice(int dev_idx=0);
	int countDevices();
}
#endif /* MEMORY_TOOLS_H_ */
