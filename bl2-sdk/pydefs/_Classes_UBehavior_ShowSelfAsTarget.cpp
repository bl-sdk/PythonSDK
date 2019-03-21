#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowSelfAsTarget(py::object m)
{
    py::class_< UBehavior_ShowSelfAsTarget,  UBehaviorBase   >(m, "UBehavior_ShowSelfAsTarget")
        .def("StaticClass", &UBehavior_ShowSelfAsTarget::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ShowSelfAsTarget::ApplyBehaviorToContext)
          ;
}