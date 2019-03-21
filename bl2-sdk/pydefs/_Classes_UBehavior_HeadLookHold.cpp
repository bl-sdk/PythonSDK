#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_HeadLookHold()
{
    class_< UBehavior_HeadLookHold, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_HeadLookHold", no_init)
        .def_readwrite("Reason", &UBehavior_HeadLookHold::Reason)
        .def_readwrite("Action", &UBehavior_HeadLookHold::Action)
        .def("StaticClass", &UBehavior_HeadLookHold::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_HeadLookHold::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}