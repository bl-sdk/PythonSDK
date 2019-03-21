#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FListenEntry(py::object m)
{
    py::class_< FListenEntry >(m, "FListenEntry")
        .def_readwrite("RemoteId", &FListenEntry::RemoteId)
        .def_readwrite("Status", &FListenEntry::Status)
        .def_readwrite("ActiveTimestamp", &FListenEntry::ActiveTimestamp)
  ;
}