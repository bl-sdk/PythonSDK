#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPlayerMaster()
{
    py::class_< UIPlayerMaster,  UInterface   >("UIPlayerMaster")
        .def("StaticClass", &UIPlayerMaster::StaticClass, py::return_value_policy::reference)
        .def("GetPlayerMasterPlayerController", &UIPlayerMaster::GetPlayerMasterPlayerController, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}