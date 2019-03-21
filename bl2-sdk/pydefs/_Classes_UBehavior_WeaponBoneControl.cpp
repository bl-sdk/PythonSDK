#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponBoneControl()
{
    class_< UBehavior_WeaponBoneControl, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_WeaponBoneControl", no_init)
        .def_readwrite("BoneControlName", &UBehavior_WeaponBoneControl::BoneControlName)
        .def_readwrite("WeaponEventType", &UBehavior_WeaponBoneControl::WeaponEventType)
        .def("StaticClass", &UBehavior_WeaponBoneControl::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_WeaponBoneControl::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}