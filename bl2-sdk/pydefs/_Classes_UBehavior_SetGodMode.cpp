#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetGodMode()
{
    class_< UBehavior_SetGodMode, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetGodMode", no_init)
        .def("StaticClass", &UBehavior_SetGodMode::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetGodMode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}