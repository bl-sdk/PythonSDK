#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FControllerConnectionState(py::module &m)
{
    py::class_< FControllerConnectionState >(m, "FControllerConnectionState")
        .def_readwrite("bIsControllerConnected", &FControllerConnectionState::bIsControllerConnected)
        .def_readwrite("bLastIsControllerConnected", &FControllerConnectionState::bLastIsControllerConnected)
  ;
}