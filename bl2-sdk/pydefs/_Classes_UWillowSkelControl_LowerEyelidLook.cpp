#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LowerEyelidLook(py::object m)
{
    py::class_< UWillowSkelControl_LowerEyelidLook,  UWillowSkelControl_EyelidLook   >(m, "UWillowSkelControl_LowerEyelidLook")
        .def("StaticClass", &UWillowSkelControl_LowerEyelidLook::StaticClass, py::return_value_policy::reference)
          ;
}