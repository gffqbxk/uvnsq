/*
   Copyright ©2019, orcaer@yeah All rights reserved.

   Author: hebaichuan

   Last modified: 2019-9-16

   Description: uv-nsq
*/

#ifndef   NSQ_LOOKUPD_H
#define   NSQ_LOOKUPD_H

#include <string>
#include <vector>

namespace nsq 
{

struct NsqNode
{
    std::string remoteaddr;
    uint16_t tcpport;
    uint16_t httpport;
};

class NsqLookupd 
{
public:
    static long HttpGet(std::string&& url, std::string& header, std::string& resp);
    static int  GetNodes(std::string&& url, std::vector<NsqNode>& nodes);
};

}
#endif
