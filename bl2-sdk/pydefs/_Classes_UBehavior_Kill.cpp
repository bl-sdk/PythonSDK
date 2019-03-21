#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Kill()
{
    class_< UBehavior_Kill, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Kill", no_init)
        .def_readwrite("DeathType", &UBehavior_Kill::DeathType)
        .def_readwrite("DamageType", &UBehavior_Kill::DamageType)
        .def_readwrite("TargetContext", &UBehavior_Kill::TargetContext)
        .def("StaticClass", &UBehavior_Kill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Kill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}