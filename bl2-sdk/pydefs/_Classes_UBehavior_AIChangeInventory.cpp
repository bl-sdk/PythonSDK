#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AIChangeInventory(py::module &m)
{
    py::class_< UBehavior_AIChangeInventory,  UBehaviorBase   >(m, "UBehavior_AIChangeInventory")
		.def_static("StaticClass", &UBehavior_AIChangeInventory::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewItemPoolList", &UBehavior_AIChangeInventory::NewItemPoolList)
        .def_readwrite("NewItemPoolIncludedLists", &UBehavior_AIChangeInventory::NewItemPoolIncludedLists)
        .def("ApplyBehaviorToContext", &UBehavior_AIChangeInventory::ApplyBehaviorToContext)
          ;
}