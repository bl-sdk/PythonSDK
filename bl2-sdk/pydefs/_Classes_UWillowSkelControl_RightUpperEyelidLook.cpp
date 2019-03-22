#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RightUpperEyelidLook(py::module &m)
{
    py::class_< UWillowSkelControl_RightUpperEyelidLook,  UWillowSkelControl_UpperEyelidLook   >(m, "UWillowSkelControl_RightUpperEyelidLook")
        .def("StaticClass", &UWillowSkelControl_RightUpperEyelidLook::StaticClass, py::return_value_policy::reference)
          ;
}