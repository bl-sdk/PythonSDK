#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDenAllegiance()
{
    class_< UBehavior_ChangeDenAllegiance, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeDenAllegiance", no_init)
        .def_readwrite("Allegiance", &UBehavior_ChangeDenAllegiance::Allegiance)
        .def("StaticClass", &UBehavior_ChangeDenAllegiance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDenAllegiance::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}