#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlLookAtActor(py::module &m)
{
    py::class_< UBehavior_SetSkelControlLookAtActor,  UBehaviorBase   >(m, "UBehavior_SetSkelControlLookAtActor")
		.def_static("StaticClass", &UBehavior_SetSkelControlLookAtActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlLookAtActor::SkelControlName)
        .def_readwrite("TargetContext", &UBehavior_SetSkelControlLookAtActor::TargetContext)
        .def_readwrite("Offset", &UBehavior_SetSkelControlLookAtActor::Offset)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlLookAtActor::ApplyBehaviorToContext)
          ;
}