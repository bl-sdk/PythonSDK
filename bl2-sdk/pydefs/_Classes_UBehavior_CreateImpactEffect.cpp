#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CreateImpactEffect()
{
    class_< UBehavior_CreateImpactEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CreateImpactEffect", no_init)
        .def_readwrite("ImpactDefinition", &UBehavior_CreateImpactEffect::ImpactDefinition)
        .def_readwrite("ImpactPointName", &UBehavior_CreateImpactEffect::ImpactPointName)
        .def_readwrite("ImpactDirection", &UBehavior_CreateImpactEffect::ImpactDirection)
        .def_readwrite("ImpactTraceLength", &UBehavior_CreateImpactEffect::ImpactTraceLength)
        .def_readwrite("ImpactTraceStartBackupLength", &UBehavior_CreateImpactEffect::ImpactTraceStartBackupLength)
        .def("StaticClass", &UBehavior_CreateImpactEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CreateImpactEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}