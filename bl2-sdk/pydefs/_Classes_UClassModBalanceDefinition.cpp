#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClassModBalanceDefinition()
{
    class_< UClassModBalanceDefinition, bases< UItemBalanceDefinition >  , boost::noncopyable>("UClassModBalanceDefinition", no_init)
        .def_readwrite("ClassModDefinitions", &UClassModBalanceDefinition::ClassModDefinitions)
        .def("StaticClass", &UClassModBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetClassModDefSpawnedByBalanceDef", &UClassModBalanceDefinition::GetClassModDefSpawnedByBalanceDef)
        .def("GetInventoryDefinitionForManufacturerGrade", &UClassModBalanceDefinition::GetInventoryDefinitionForManufacturerGrade, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}