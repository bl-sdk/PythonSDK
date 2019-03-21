#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Delay()
{
    class_< UBehavior_Delay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Delay", no_init)
        .def_readwrite("Delay", &UBehavior_Delay::Delay)
        .def("StaticClass", &UBehavior_Delay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Delay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}