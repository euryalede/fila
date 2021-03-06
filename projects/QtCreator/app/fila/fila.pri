########################################################################
# Copyright (c) 1988-2018 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: fila.pri
#
# Author: $author$
#   Date: 4/21/2018
#
# QtCreator .pri file for fila executable fila
########################################################################

########################################################################
# fila

# fila_exe TARGET
#
fila_exe_TARGET = fila

# fila_exe INCLUDEPATH
#
fila_exe_INCLUDEPATH += \
$${fila_INCLUDEPATH} \

# fila_exe DEFINES
#
fila_exe_DEFINES += \
$${fila_DEFINES} \

########################################################################
# fila_exe OBJECTIVE_HEADERS
#
#fila_exe_OBJECTIVE_HEADERS += \
#$${FILA_SRC}/fila/base/Base.hh \

# fila_exe OBJECTIVE_SOURCES
#
#fila_exe_OBJECTIVE_SOURCES += \
#$${FILA_SRC}/fila/base/Base.mm \

########################################################################
# fila_exe HEADERS
#
fila_exe_HEADERS += \
$${NADIR_SRC}/xos/base/Locked.hpp \
$${NADIR_SRC}/xos/base/Logged.hpp \
$${NADIR_SRC}/xos/base/Created.hpp \
$${CRONO_SRC}/xos/logger/Interface.hpp \
$${FILA_SRC}/xos/mt/Mutex.hpp \
$${FILA_SRC}/xos/mt/posix/Mutex.hpp \
$${FILA_SRC}/xos/mt/os/Os.hpp \
$${FILA_SRC}/xos/mt/os/Mutex.hpp \
$${FILA_SRC}/xos/mt/Locked.hpp \
$${FILA_SRC}/xos/console/Main_main.hpp \
$${FILA_SRC}/xos/app/console/fila/Main.hpp \

# fila_exe SOURCES
#
fila_exe_SOURCES += \
$${NADIR_SRC}/xos/base/Locked.cpp \
$${NADIR_SRC}/xos/base/Logged.cpp \
$${NADIR_SRC}/xos/base/Created.cpp \
$${CRONO_SRC}/xos/logger/Interface.cpp \
$${FILA_SRC}/xos/mt/os/Os.cpp \
$${FILA_SRC}/xos/mt/os/Mutex.cpp \
$${FILA_SRC}/xos/mt/Locked.cpp \
$${FILA_SRC}/xos/console/Main_main.cpp \
$${FILA_SRC}/xos/app/console/fila/Main.cpp \

########################################################################
# fila_exe FRAMEWORKS
#
fila_exe_FRAMEWORKS += \
$${fila_FRAMEWORKS} \

# fila_exe LIBS
#
fila_exe_LIBS += \
$${fila_LIBS} \

