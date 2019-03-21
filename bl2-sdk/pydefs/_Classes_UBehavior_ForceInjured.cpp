#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ForceInjured()
{
    class_< UBehavior_ForceInjured, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ForceInjured", no_init)
        .def("StaticClass", &UBehavior_ForceInjured::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ForceInjured::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}