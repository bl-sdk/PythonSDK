#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyBeams()
{
    class_< UBehavior_DestroyBeams, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DestroyBeams", no_init)
        .def_readwrite("TargetContext", &UBehavior_DestroyBeams::TargetContext)
        .def("StaticClass", &UBehavior_DestroyBeams::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DestroyBeams::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}