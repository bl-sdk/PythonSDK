#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIResetProvocation()
{
    class_< UBehavior_AIResetProvocation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIResetProvocation", no_init)
        .def("StaticClass", &UBehavior_AIResetProvocation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIResetProvocation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}