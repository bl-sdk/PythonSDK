#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LowerEyelidLook()
{
    py::class_< UWillowSkelControl_LowerEyelidLook,  UWillowSkelControl_EyelidLook   >("UWillowSkelControl_LowerEyelidLook")
        .def("StaticClass", &UWillowSkelControl_LowerEyelidLook::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}