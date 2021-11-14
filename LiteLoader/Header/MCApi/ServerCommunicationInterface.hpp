// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ServerCommunicationInterface {

public:
    MCAPI void sendBandwidthMetric(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, std::string const&);
    MCAPI void sendChunkLoadTelemtryData(struct ChunkLoadTelemetryData const&);
    MCAPI void sendServerStarted();
    MCAPI void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const&);

private:
    MCAPI void communicate(std::string const&, class Json::Value const&);
};