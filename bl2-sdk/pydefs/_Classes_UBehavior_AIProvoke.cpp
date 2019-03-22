#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIProvoke(py::module &m)
{
    py::class_< UBehavior_AIProvoke,  UBehaviorBase   >(m, "UBehavior_AIProvoke")
        .def_readwrite("ProvokeInstigator", &UBehavior_AIProvoke::ProvokeInstigator)
        .def("StaticClass", &UBehavior_AIProvoke::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIProvoke::ApplyBehaviorToContext)
          ;
}