#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftLowerEyelidLook()
{
    py::class_< UWillowSkelControl_LeftLowerEyelidLook,  UWillowSkelControl_LowerEyelidLook   >("UWillowSkelControl_LeftLowerEyelidLook")
        .def("StaticClass", &UWillowSkelControl_LeftLowerEyelidLook::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}