#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldDamageResistanceType()
{
    class_< UBehavior_SetShieldDamageResistanceType, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetShieldDamageResistanceType", no_init)
        .def_readwrite("DamageResistanceType", &UBehavior_SetShieldDamageResistanceType::DamageResistanceType)
        .def("StaticClass", &UBehavior_SetShieldDamageResistanceType::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldDamageResistanceType::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}