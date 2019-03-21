#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AISetFlight()
{
    class_< UBehavior_AISetFlight, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AISetFlight", no_init)
        .def_readwrite("Mode", &UBehavior_AISetFlight::Mode)
        .def("StaticClass", &UBehavior_AISetFlight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AISetFlight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}