#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_BroadcastEcho()
{
    class_< UBehavior_BroadcastEcho, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_BroadcastEcho", no_init)
        .def("StaticClass", &UBehavior_BroadcastEcho::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_BroadcastEcho::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}