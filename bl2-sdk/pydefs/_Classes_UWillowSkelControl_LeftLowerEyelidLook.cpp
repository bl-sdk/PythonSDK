#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftLowerEyelidLook(py::module &m)
{
    py::class_< UWillowSkelControl_LeftLowerEyelidLook,  UWillowSkelControl_LowerEyelidLook   >(m, "UWillowSkelControl_LeftLowerEyelidLook")
        .def("StaticClass", &UWillowSkelControl_LeftLowerEyelidLook::StaticClass, py::return_value_policy::reference)
          ;
}