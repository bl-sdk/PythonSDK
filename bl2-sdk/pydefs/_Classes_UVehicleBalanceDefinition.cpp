#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleBalanceDefinition()
{
    class_< UVehicleBalanceDefinition, bases< UBaseBalanceDefinition >  , boost::noncopyable>("UVehicleBalanceDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UVehicleBalanceDefinition::VfTable_IIConstructObject)
        .def_readwrite("DefaultVehicle", &UVehicleBalanceDefinition::DefaultVehicle)
        .def_readwrite("DefaultExpLevel", &UVehicleBalanceDefinition::DefaultExpLevel)
        .def_readwrite("Grades", &UVehicleBalanceDefinition::Grades)
        .def("StaticClass", &UVehicleBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetArchetypeForGrade", &UVehicleBalanceDefinition::GetArchetypeForGrade, return_value_policy< reference_existing_object >())
        .def("GetArchetypeForGameStage", &UVehicleBalanceDefinition::GetArchetypeForGameStage, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}