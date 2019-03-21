#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIChangeInventory()
{
    py::class_< UBehavior_AIChangeInventory,  UBehaviorBase   >("UBehavior_AIChangeInventory")
        .def_readwrite("NewItemPoolList", &UBehavior_AIChangeInventory::NewItemPoolList)
        .def_readwrite("NewItemPoolIncludedLists", &UBehavior_AIChangeInventory::NewItemPoolIncludedLists)
        .def("StaticClass", &UBehavior_AIChangeInventory::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AIChangeInventory::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}