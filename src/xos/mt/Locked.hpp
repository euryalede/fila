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
///   File: Locked.hpp
///
/// Author: $author$
///   Date: 4/22/2018
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_MT_LOCKED_HPP
#define _XOS_MT_LOCKED_HPP

#include "xos/mt/os/Mutex.hpp"

namespace xos {
namespace mt {

typedef os::Mutex::Implements LockedTImplements;
typedef os::Mutex LockedTExtends;
///////////////////////////////////////////////////////////////////////
///  Class: LockedT
///////////////////////////////////////////////////////////////////////
template 
<class TImplements = LockedTImplements, class TExtends = LockedTExtends>

class _EXPORT_CLASS LockedT: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    LockedT(bool isLogged, bool isErrLogged): Extends(isLogged, isErrLogged) {
    }
    LockedT(bool isLogged): Extends(isLogged) {
    }
    LockedT(const LockedT &copy): Extends(copy) {
    }
    LockedT() {
    }
    virtual ~LockedT() {
    }
};
typedef LockedT<> Locked;

} /// namespace mt
} /// namespace xos

#endif /// _XOS_MT_LOCKED_HPP 
