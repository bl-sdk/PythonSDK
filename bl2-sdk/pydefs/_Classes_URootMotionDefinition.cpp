#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URootMotionDefinition()
{
    py::class_< URootMotionDefinition,  UGBXDefinition   >("URootMotionDefinition")
        .def_readwrite("RootMotionMode", &URootMotionDefinition::RootMotionMode)
        .def_readonly("RootBoneOption", &URootMotionDefinition::RootBoneOption)
        .def_readwrite("RootRotationMode", &URootMotionDefinition::RootRotationMode)
        .def_readonly("RootRotationOption", &URootMotionDefinition::RootRotationOption)
        .def("StaticClass", &URootMotionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}