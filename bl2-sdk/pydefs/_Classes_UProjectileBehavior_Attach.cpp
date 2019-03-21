#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Attach()
{
    class_< UProjectileBehavior_Attach, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_Attach", no_init)
        .def_readwrite("AttachAkEvent", &UProjectileBehavior_Attach::AttachAkEvent)
        .def_readwrite("HitActor", &UProjectileBehavior_Attach::HitActor)
        .def_readwrite("HitNormal", &UProjectileBehavior_Attach::HitNormal)
        .def_readwrite("HitLocation", &UProjectileBehavior_Attach::HitLocation)
        .def_readwrite("BoneIndex", &UProjectileBehavior_Attach::BoneIndex)
        .def("StaticClass", &UProjectileBehavior_Attach::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Attach::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}