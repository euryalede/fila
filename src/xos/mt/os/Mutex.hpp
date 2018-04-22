///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: Mutex.hpp
///
/// Author: $author$
///   Date: 4/22/2018
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_MT_OS_MUTEX_HPP
#define _XOS_MT_OS_MUTEX_HPP

#include "xos/mt/Mutex.hpp"
#include "xos/mt/os/Os.hpp"

#if defined(WINDOWS)
#include "xos/mt/microsoft/windows/Mutex.hpp"
#elif defined(MACOSX)
#include "xos/mt/apple/osx/Mutex.hpp"
#elif defined(APPIOS)
#include "xos/mt/apple/ios/Mutex.hpp"
#elif defined(LINUX)
#include "xos/mt/linux/Mutex.hpp"
#else /// defined(WINDOWS)
#include "xos/mt/posix/Mutex.hpp"
#endif /// defined(WINDOWS)

namespace xos {
namespace mt {
namespace os {

typedef os::Mutex Mutex;

} /// namespace os
} /// namespace mt
} /// namespace xos

#endif /// _XOS_MT_OS_MUTEX_HPP 
