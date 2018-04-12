#ifndef _DNS_MESSAGE_H
#define _DNS_MESSAGE_H

#include "DNSHeader.h"
#include "DNSQuestion.h"
#include "DNSRecord.h"

struct DNSMessage
{
    DNSHeader header;
    DNSQuestion question;
    DNSRecord answer;
    DNSRecord authority;
    DNSRecord additional;
};


#endif //_DNS_LIB_H
