#ifndef SERVERTCP_HPP
#define SERVERTCP_HPP

#include "HeaderGlobal.hpp"

namespace ServerTCP_ns
{


    /// @brief This class creates and listens one socket
    // Possibly accepts the whole of connections and answers them.
    class ServerTCP
    {
        public:
            /// @brief 

            ServerTCP() noexcept = default;
            ServerTCP(SercerTCP&& ) = delete; // move constructor is forbidden.
        
    }

}

#endif