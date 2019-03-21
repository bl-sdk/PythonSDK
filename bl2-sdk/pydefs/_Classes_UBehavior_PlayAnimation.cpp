#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAnimation()
{
    class_< UBehavior_PlayAnimation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PlayAnimation", no_init)
        .def_readwrite("AnimName", &UBehavior_PlayAnimation::AnimName)
        .def("StaticClass", &UBehavior_PlayAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PlayAnimation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}