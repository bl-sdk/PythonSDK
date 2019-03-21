#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetAIFlag()
{
    class_< UBehavior_SetAIFlag, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetAIFlag", no_init)
        .def_readwrite("FlagDef", &UBehavior_SetAIFlag::FlagDef)
        .def("StaticClass", &UBehavior_SetAIFlag::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetAIFlag::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}