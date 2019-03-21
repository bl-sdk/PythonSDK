#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SelectPhaselockTarget()
{
    class_< UBehavior_SelectPhaselockTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SelectPhaselockTarget", no_init)
        .def_readwrite("LifterSkillContext", &UBehavior_SelectPhaselockTarget::LifterSkillContext)
        .def("StaticClass", &UBehavior_SelectPhaselockTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SelectPhaselockTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}