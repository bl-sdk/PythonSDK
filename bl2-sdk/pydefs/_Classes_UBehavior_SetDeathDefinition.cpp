#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetDeathDefinition()
{
    class_< UBehavior_SetDeathDefinition, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetDeathDefinition", no_init)
        .def_readwrite("NewDeathDefinition", &UBehavior_SetDeathDefinition::NewDeathDefinition)
        .def("StaticClass", &UBehavior_SetDeathDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetDeathDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}