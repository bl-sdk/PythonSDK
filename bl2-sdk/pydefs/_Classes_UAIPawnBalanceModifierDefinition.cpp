#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIPawnBalanceModifierDefinition()
{
    class_< UAIPawnBalanceModifierDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAIPawnBalanceModifierDefinition", no_init)
        .def_readwrite("AIPawnBalanceDefinitionPath", &UAIPawnBalanceModifierDefinition::AIPawnBalanceDefinitionPath)
        .def_readwrite("AttributeStartingValues", &UAIPawnBalanceModifierDefinition::AttributeStartingValues)
        .def("StaticClass", &UAIPawnBalanceModifierDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}