#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_DropItems(py::module &m)
{
    py::class_< UPlayerBehavior_DropItems,  UBehaviorBase   >(m, "UPlayerBehavior_DropItems")
        .def_readwrite("ConfigurationName", &UPlayerBehavior_DropItems::ConfigurationName)
        .def_readwrite("TargetContext", &UPlayerBehavior_DropItems::TargetContext)
        .def_readwrite("LocationContext", &UPlayerBehavior_DropItems::LocationContext)
        .def_readwrite("ItemDropOffset", &UBehavior_DropItems::ItemDropOffset)
        .def_readwrite("ItemDropVelocity", &UBehavior_DropItems::ItemDropVelocity)
        .def_readwrite("ItemScatterOffset", &UBehavior_DropItems::ItemScatterOffset)
        .def_readwrite("CustomDirection", &UBehavior_DropItems::CustomDirection)
        .def_readwrite("CustomVelocity", &UBehavior_DropItems::CustomVelocity)
        .def_readwrite("Torque", &UBehavior_DropItems::Torque)
        .def("StaticClass", &UPlayerBehavior_DropItems::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_DropItems::ApplyBehaviorToContext)
        .def("DropItems", &UBehavior_DropItems::DropItems)
          ;
}