//
// Copyright (c) 2014 Secret Geometry, Inc.  All rights reserved.
//

#include "SSHConnection.hpp"
#include <libssh2.h>

SSHConnection::SSHConnection()
{
    libssh2_init(0);
    libssh2_session_last_error(nullptr, nullptr, 0, false);
}
