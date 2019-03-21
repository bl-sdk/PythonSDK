#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StartDeathRagdoll()
{
    class_< UBehavior_StartDeathRagdoll, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StartDeathRagdoll", no_init)
        .def("StaticClass", &UBehavior_StartDeathRagdoll::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StartDeathRagdoll::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}