#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetHardAttach()
{
    class_< UBehavior_SetHardAttach, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetHardAttach", no_init)
        .def("StaticClass", &UBehavior_SetHardAttach::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetHardAttach::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}