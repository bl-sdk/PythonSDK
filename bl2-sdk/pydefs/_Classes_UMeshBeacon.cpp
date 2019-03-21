#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMeshBeacon()
{
    class_< UMeshBeacon, bases< UObject >  , boost::noncopyable>("UMeshBeacon", no_init)
        .def_readwrite("VfTable_FTickableObject", &UMeshBeacon::VfTable_FTickableObject)
        .def_readwrite("MeshBeaconPort", &UMeshBeacon::MeshBeaconPort)
        .def_readwrite("Socket", &UMeshBeacon::Socket)
        .def_readwrite("HeartbeatTimeout", &UMeshBeacon::HeartbeatTimeout)
        .def_readwrite("ElapsedHeartbeatTime", &UMeshBeacon::ElapsedHeartbeatTime)
        .def_readwrite("BeaconName", &UMeshBeacon::BeaconName)
        .def_readwrite("SocketSendBufferSize", &UMeshBeacon::SocketSendBufferSize)
        .def_readwrite("SocketReceiveBufferSize", &UMeshBeacon::SocketReceiveBufferSize)
        .def_readwrite("MaxBandwidthTestBufferSize", &UMeshBeacon::MaxBandwidthTestBufferSize)
        .def_readwrite("MinBandwidthTestBufferSize", &UMeshBeacon::MinBandwidthTestBufferSize)
        .def_readwrite("MaxBandwidthTestSendTime", &UMeshBeacon::MaxBandwidthTestSendTime)
        .def_readwrite("MaxBandwidthTestReceiveTime", &UMeshBeacon::MaxBandwidthTestReceiveTime)
        .def_readwrite("MaxBandwidthHistoryEntries", &UMeshBeacon::MaxBandwidthHistoryEntries)
        .def("StaticClass", &UMeshBeacon::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyBeacon", &UMeshBeacon::eventDestroyBeacon)
        .staticmethod("StaticClass")
  ;
}