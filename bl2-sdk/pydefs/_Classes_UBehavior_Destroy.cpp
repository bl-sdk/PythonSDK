#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Destroy()
{
    py::class_< UBehavior_Destroy,  UBehaviorBase   >("UBehavior_Destroy")
        .def("StaticClass", &UBehavior_Destroy::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Destroy::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}