#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ShowSelfAsTarget()
{
    class_< UBehavior_ShowSelfAsTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ShowSelfAsTarget", no_init)
        .def("StaticClass", &UBehavior_ShowSelfAsTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ShowSelfAsTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}