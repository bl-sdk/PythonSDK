#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IsCensoredMode()
{
    class_< UBehavior_IsCensoredMode, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IsCensoredMode", no_init)
        .def("StaticClass", &UBehavior_IsCensoredMode::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IsCensoredMode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}