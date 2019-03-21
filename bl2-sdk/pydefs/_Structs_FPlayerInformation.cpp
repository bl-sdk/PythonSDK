#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerInformation(py::object m)
{
    py::class_< FPlayerInformation >(m, "FPlayerInformation")
        .def_readwrite("ControllerName", &FPlayerInformation::ControllerName)
        .def_readwrite("PlayerName", &FPlayerInformation::PlayerName)
        .def_readwrite("UniqueId", &FPlayerInformation::UniqueId)
  ;
}