#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_BroadcastEcho(py::object m)
{
    py::class_< UBehavior_BroadcastEcho,  UBehaviorBase   >(m, "UBehavior_BroadcastEcho")
        .def("StaticClass", &UBehavior_BroadcastEcho::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_BroadcastEcho::ApplyBehaviorToContext)
          ;
}