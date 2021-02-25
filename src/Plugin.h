
#ifndef ZEEK_PLUGIN_ZEEK_AF_PACKET
#define ZEEK_PLUGIN_ZEEK_AF_PACKET

#include <zeek/plugin/Plugin.h>

namespace af_packet::plugin::Zeek_AF_Packet {

class Plugin : public zeek::plugin::Plugin
{
protected:
	// Overridden from zeek::plugin::Plugin.
	zeek::plugin::Configuration Configure() override;
};

extern Plugin plugin;

}

#endif
