#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAllegiance()
{
    class_< UBehavior_ChangeAllegiance, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeAllegiance", no_init)
        .def_readwrite("Allegiance", &UBehavior_ChangeAllegiance::Allegiance)
        .def("StaticClass", &UBehavior_ChangeAllegiance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}