#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URootMotionDefinition(py::module &m)
{
    py::class_< URootMotionDefinition,  UGBXDefinition   >(m, "URootMotionDefinition")
        .def_readwrite("RootMotionMode", &URootMotionDefinition::RootMotionMode)
        .def_readwrite("RootRotationMode", &URootMotionDefinition::RootRotationMode)
        .def("StaticClass", &URootMotionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}