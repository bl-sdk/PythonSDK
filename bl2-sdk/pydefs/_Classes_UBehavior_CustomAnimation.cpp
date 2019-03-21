#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CustomAnimation()
{
    class_< UBehavior_CustomAnimation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CustomAnimation", no_init)
        .def_readwrite("Reaction", &UBehavior_CustomAnimation::Reaction)
        .def_readwrite("CustomAnimNodeName", &UBehavior_CustomAnimation::CustomAnimNodeName)
        .def_readwrite("AnimName", &UBehavior_CustomAnimation::AnimName)
        .def_readwrite("AnimDuration", &UBehavior_CustomAnimation::AnimDuration)
        .def_readwrite("BlendInTime", &UBehavior_CustomAnimation::BlendInTime)
        .def_readwrite("BlendOutTime", &UBehavior_CustomAnimation::BlendOutTime)
        .def_readwrite("AnimRate", &UBehavior_CustomAnimation::AnimRate)
        .def("StaticClass", &UBehavior_CustomAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CustomAnimation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}