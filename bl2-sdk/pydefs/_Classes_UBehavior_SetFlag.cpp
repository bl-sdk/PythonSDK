#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetFlag()
{
    class_< UBehavior_SetFlag, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetFlag", no_init)
        .def_readwrite("FlagsToSet", &UBehavior_SetFlag::FlagsToSet)
        .def("StaticClass", &UBehavior_SetFlag::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetFlag::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}