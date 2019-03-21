#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetDemigodMode()
{
    class_< UBehavior_SetDemigodMode, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetDemigodMode", no_init)
        .def_readwrite("Status", &UBehavior_SetDemigodMode::Status)
        .def("StaticClass", &UBehavior_SetDemigodMode::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetDemigodMode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}