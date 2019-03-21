#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_PlayEchoCall()
{
    py::class_< UPlayerBehavior_PlayEchoCall,  UPlayerBehaviorBase   >("UPlayerBehavior_PlayEchoCall")
        .def("StaticClass", &UPlayerBehavior_PlayEchoCall::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_PlayEchoCall::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}