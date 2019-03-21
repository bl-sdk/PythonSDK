#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPoolListDefinition()
{
    py::class_< UItemPoolListDefinition,  UGBXDefinition   >("UItemPoolListDefinition")
        .def_readwrite("ItemPoolIncludedLists", &UItemPoolListDefinition::ItemPoolIncludedLists)
        .def_readwrite("ItemPools", &UItemPoolListDefinition::ItemPools)
        .def("StaticClass", &UItemPoolListDefinition::StaticClass, py::return_value_policy::reference)
        .def("AddToItemPoolList", &UItemPoolListDefinition::AddToItemPoolList)
        .staticmethod("StaticClass")
  ;
}