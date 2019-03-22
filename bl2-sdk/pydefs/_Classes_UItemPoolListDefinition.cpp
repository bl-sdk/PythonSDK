#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPoolListDefinition(py::module &m)
{
    py::class_< UItemPoolListDefinition,  UGBXDefinition   >(m, "UItemPoolListDefinition")
        .def_readwrite("ItemPoolIncludedLists", &UItemPoolListDefinition::ItemPoolIncludedLists)
        .def_readwrite("ItemPools", &UItemPoolListDefinition::ItemPools)
        .def("AddToItemPoolList", &UItemPoolListDefinition::AddToItemPoolList)
          ;
}