#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryCardPresentationDefinition(py::object m)
{
    py::class_< UInventoryCardPresentationDefinition,  UGBXDefinition   >(m, "UInventoryCardPresentationDefinition")
        .def_readwrite("ZippyFrame", &UInventoryCardPresentationDefinition::ZippyFrame)
        .def_readwrite("ItemFrame", &UInventoryCardPresentationDefinition::ItemFrame)
        .def_readwrite("DescriptionLocReference", &UInventoryCardPresentationDefinition::DescriptionLocReference)
        .def("StaticClass", &UInventoryCardPresentationDefinition::StaticClass, py::return_value_policy::reference)
          ;
}