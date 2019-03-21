#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DropItems()
{
    py::class_< UBehavior_DropItems,  UBehaviorBase   >("UBehavior_DropItems")
        .def_readwrite("ItemDropOffset", &UBehavior_DropItems::ItemDropOffset)
        .def_readwrite("ItemDropVelocity", &UBehavior_DropItems::ItemDropVelocity)
        .def_readwrite("ItemScatterOffset", &UBehavior_DropItems::ItemScatterOffset)
        .def_readwrite("CustomDirection", &UBehavior_DropItems::CustomDirection)
        .def_readwrite("CustomVelocity", &UBehavior_DropItems::CustomVelocity)
        .def_readwrite("Torque", &UBehavior_DropItems::Torque)
        .def("StaticClass", &UBehavior_DropItems::StaticClass, py::return_value_policy::reference)
        .def("DropItems", &UBehavior_DropItems::DropItems)
        .def("ApplyBehaviorToContext", &UBehavior_DropItems::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}