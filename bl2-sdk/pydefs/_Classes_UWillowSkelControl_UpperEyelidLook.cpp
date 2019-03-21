#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_UpperEyelidLook()
{
    class_< UWillowSkelControl_UpperEyelidLook, bases< USkelControlSingleBone >  , boost::noncopyable>("UWillowSkelControl_UpperEyelidLook", no_init)
        .def_readwrite("LookAtOffset", &UWillowSkelControl_UpperEyelidLook::LookAtOffset)
        .def_readwrite("EyeInterpSpeed", &UWillowSkelControl_UpperEyelidLook::EyeInterpSpeed)
        .def_readwrite("OriginalHorizAngle", &UWillowSkelControl_EyelidLook::OriginalHorizAngle)
        .def_readwrite("OriginalVertAngle", &UWillowSkelControl_EyelidLook::OriginalVertAngle)
        .def_readwrite("EyeBoneName", &UWillowSkelControl_EyelidLook::EyeBoneName)
        .def_readwrite("EyeMaterialIndex", &UWillowSkelControl_EyelidLook::EyeMaterialIndex)
        .def_readwrite("vertMax", &UWillowSkelControl_EyelidLook::vertMax)
        .def_readwrite("vertMin", &UWillowSkelControl_EyelidLook::vertMin)
        .def_readwrite("horizMax", &UWillowSkelControl_EyelidLook::horizMax)
        .def_readwrite("horizMin", &UWillowSkelControl_EyelidLook::horizMin)
        .def_readwrite("maxOpenValue", &UWillowSkelControl_EyelidLook::maxOpenValue)
        .def_readwrite("minOpenValue", &UWillowSkelControl_EyelidLook::minOpenValue)
        .def_readwrite("ClosedValue", &UWillowSkelControl_EyelidLook::ClosedValue)
        .def("StaticClass", &UWillowSkelControl_UpperEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}