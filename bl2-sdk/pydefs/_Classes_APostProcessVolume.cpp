#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APostProcessVolume(py::module &m)
{
    py::class_< APostProcessVolume,  AVolume   >(m, "APostProcessVolume")
        .def_readwrite("Priority", &APostProcessVolume::Priority)
        .def_readwrite("Settings", &APostProcessVolume::Settings)
        .def_readwrite("NextLowerPriorityVolume", &APostProcessVolume::NextLowerPriorityVolume)
        .def("StaticClass", &APostProcessVolume::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &APostProcessVolume::OnToggle)
          ;
}