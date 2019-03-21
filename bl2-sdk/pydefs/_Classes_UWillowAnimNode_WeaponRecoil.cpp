#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_WeaponRecoil()
{
    class_< UWillowAnimNode_WeaponRecoil, bases< UAnimNodeSpecialMoveBlend >  , boost::noncopyable>("UWillowAnimNode_WeaponRecoil", no_init)
        .def_readwrite("BaseRecoilScale", &UWillowAnimNode_WeaponRecoil::BaseRecoilScale)
        .def("StaticClass", &UWillowAnimNode_WeaponRecoil::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayData", &UWillowAnimNode_WeaponRecoil::PlayData)
        .staticmethod("StaticClass")
  ;
}