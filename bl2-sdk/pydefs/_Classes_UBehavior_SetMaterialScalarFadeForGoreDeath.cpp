#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialScalarFadeForGoreDeath()
{
    class_< UBehavior_SetMaterialScalarFadeForGoreDeath, bases< UBehavior_SetMaterialScalarFade >  , boost::noncopyable>("UBehavior_SetMaterialScalarFadeForGoreDeath", no_init)
        .def("StaticClass", &UBehavior_SetMaterialScalarFadeForGoreDeath::StaticClass, return_value_policy< reference_existing_object >())
        .def("StartFade", &UBehavior_SetMaterialScalarFadeForGoreDeath::StartFade)
        .staticmethod("StaticClass")
  ;
}