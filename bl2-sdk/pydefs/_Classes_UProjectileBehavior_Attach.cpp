#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Attach()
{
    py::class_< UProjectileBehavior_Attach,  UProjectileBehaviorBase   >("UProjectileBehavior_Attach")
        .def_readwrite("AttachAkEvent", &UProjectileBehavior_Attach::AttachAkEvent)
        .def_readwrite("HitActor", &UProjectileBehavior_Attach::HitActor)
        .def_readwrite("HitNormal", &UProjectileBehavior_Attach::HitNormal)
        .def_readwrite("HitLocation", &UProjectileBehavior_Attach::HitLocation)
        .def_readwrite("BoneIndex", &UProjectileBehavior_Attach::BoneIndex)
        .def("StaticClass", &UProjectileBehavior_Attach::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Attach::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}