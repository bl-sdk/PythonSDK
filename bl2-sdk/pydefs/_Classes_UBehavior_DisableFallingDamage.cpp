#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DisableFallingDamage()
{
    class_< UBehavior_DisableFallingDamage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DisableFallingDamage", no_init)
        .def("StaticClass", &UBehavior_DisableFallingDamage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DisableFallingDamage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}