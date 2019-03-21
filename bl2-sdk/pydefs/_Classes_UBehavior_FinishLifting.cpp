#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FinishLifting()
{
    py::class_< UBehavior_FinishLifting,  UBehaviorBase   >("UBehavior_FinishLifting")
        .def("StaticClass", &UBehavior_FinishLifting::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_FinishLifting::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}