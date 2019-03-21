#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRequestEntry(py::object m)
{
    py::class_< FRequestEntry >(m, "FRequestEntry")
        .def_readwrite("RemoteId", &FRequestEntry::RemoteId)
        .def_readwrite("NumProbesSent", &FRequestEntry::NumProbesSent)
        .def_readwrite("ChallengeTimestamp", &FRequestEntry::ChallengeTimestamp)
        .def_readwrite("PingTimestamp", &FRequestEntry::PingTimestamp)
        .def_readwrite("Status", &FRequestEntry::Status)
        .def_readwrite("Results", &FRequestEntry::Results)
        .def_readwrite("CallbackFunc", &FRequestEntry::CallbackFunc)
        .def_readwrite("UserData", &FRequestEntry::UserData)
  ;
}