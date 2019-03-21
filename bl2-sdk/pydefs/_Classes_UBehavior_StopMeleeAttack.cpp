#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StopMeleeAttack()
{
    class_< UBehavior_StopMeleeAttack, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StopMeleeAttack", no_init)
        .def("StaticClass", &UBehavior_StopMeleeAttack::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StopMeleeAttack::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}