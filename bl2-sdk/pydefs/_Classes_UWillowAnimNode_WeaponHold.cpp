#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_WeaponHold()
{
    class_< UWillowAnimNode_WeaponHold, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNode_WeaponHold", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNode_WeaponHold::BlendTime)
        .def("StaticClass", &UWillowAnimNode_WeaponHold::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}