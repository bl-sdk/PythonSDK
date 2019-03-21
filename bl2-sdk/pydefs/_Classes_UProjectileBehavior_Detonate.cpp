#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Detonate()
{
    class_< UProjectileBehavior_Detonate, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_Detonate", no_init)
        .def_readwrite("TargetAllegiance", &UProjectileBehavior_Detonate::TargetAllegiance)
        .def("StaticClass", &UProjectileBehavior_Detonate::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Detonate::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}