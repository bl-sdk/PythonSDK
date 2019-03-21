#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlLookAtActor()
{
    py::class_< UBehavior_SetSkelControlLookAtActor,  UBehaviorBase   >("UBehavior_SetSkelControlLookAtActor")
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlLookAtActor::SkelControlName)
        .def_readwrite("TargetContext", &UBehavior_SetSkelControlLookAtActor::TargetContext)
        .def_readwrite("Offset", &UBehavior_SetSkelControlLookAtActor::Offset)
        .def("StaticClass", &UBehavior_SetSkelControlLookAtActor::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlLookAtActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}