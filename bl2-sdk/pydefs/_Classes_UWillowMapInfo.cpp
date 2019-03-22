#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowMapInfo(py::module &m)
{
    py::class_< UWillowMapInfo,  UMapInfo   >(m, "UWillowMapInfo")
        .def_readwrite("TacticalMapMovie", &UWillowMapInfo::TacticalMapMovie)
        .def_readwrite("TacticalMapVolume", &UWillowMapInfo::TacticalMapVolume)
        .def_readwrite("FrontEndMovieDef", &UWillowMapInfo::FrontEndMovieDef)
        .def("StaticClass", &UWillowMapInfo::StaticClass, py::return_value_policy::reference)
          ;
}