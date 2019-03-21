#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotationRate()
{
    py::class_< UWillowSkelControl_RotationRate,  USkelControlSingleBone   >("UWillowSkelControl_RotationRate")
        .def_readwrite("RotationRate", &UWillowSkelControl_RotationRate::RotationRate)
        .def("StaticClass", &UWillowSkelControl_RotationRate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}