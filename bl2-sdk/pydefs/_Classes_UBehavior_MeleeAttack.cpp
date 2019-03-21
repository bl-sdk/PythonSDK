#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_MeleeAttack()
{
    class_< UBehavior_MeleeAttack, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_MeleeAttack", no_init)
        .def_readwrite("MeleeDefinition", &UBehavior_MeleeAttack::MeleeDefinition)
        .def("StaticClass", &UBehavior_MeleeAttack::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_MeleeAttack::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}