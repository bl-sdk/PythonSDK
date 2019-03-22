#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshBeacon(py::module &m)
{
    py::class_< UMeshBeacon,  UObject   >(m, "UMeshBeacon")
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
        .def("StaticClass", &UMeshBeacon::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyBeacon", &UMeshBeacon::eventDestroyBeacon)
          ;
}