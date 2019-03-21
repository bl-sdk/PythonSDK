#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RightUpperEyelidLook()
{
    py::class_< UWillowSkelControl_RightUpperEyelidLook,  UWillowSkelControl_UpperEyelidLook   >("UWillowSkelControl_RightUpperEyelidLook")
        .def("StaticClass", &UWillowSkelControl_RightUpperEyelidLook::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}