#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetStance()
{
    class_< UBehavior_SetStance, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetStance", no_init)
        .def_readwrite("SetType", &UBehavior_SetStance::SetType)
        .def_readwrite("StanceType", &UBehavior_SetStance::StanceType)
        .def("StaticClass", &UBehavior_SetStance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetStance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}