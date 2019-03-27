#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingEntry(py::module &m)
{
    py::class_< FPendingEntry >(m, "FPendingEntry")
        .def_readwrite("RemoteId", &FPendingEntry::RemoteId)
        .def_readwrite("CallbackFunc", &FPendingEntry::CallbackFunc)
        .def_readwrite("UserData", &FPendingEntry::UserData)
  ;
}