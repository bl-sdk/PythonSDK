#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConnectedPeerInfo(py::object m)
{
    py::class_< FConnectedPeerInfo >(m, "FConnectedPeerInfo")
        .def_readwrite("PlayerID", &FConnectedPeerInfo::PlayerID)
        .def_readwrite("NatType", &FConnectedPeerInfo::NatType)
  ;
}