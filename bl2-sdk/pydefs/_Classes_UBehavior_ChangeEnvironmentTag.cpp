#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeEnvironmentTag()
{
    class_< UBehavior_ChangeEnvironmentTag, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeEnvironmentTag", no_init)
        .def_readwrite("Action", &UBehavior_ChangeEnvironmentTag::Action)
        .def_readwrite("EnvironmentTag", &UBehavior_ChangeEnvironmentTag::EnvironmentTag)
        .def("StaticClass", &UBehavior_ChangeEnvironmentTag::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeEnvironmentTag::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}