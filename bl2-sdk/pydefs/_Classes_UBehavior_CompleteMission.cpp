#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CompleteMission()
{
    class_< UBehavior_CompleteMission, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CompleteMission", no_init)
        .def("StaticClass", &UBehavior_CompleteMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CompleteMission::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}