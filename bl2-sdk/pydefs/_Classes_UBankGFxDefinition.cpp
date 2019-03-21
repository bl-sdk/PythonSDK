#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBankGFxDefinition()
{
    py::class_< UBankGFxDefinition,  UWillowGFxMovie3DDefinition   >("UBankGFxDefinition")
        .def_readwrite("LeftSideDef", &UBankGFxDefinition::LeftSideDef)
        .def_readwrite("RightSideDef", &UBankGFxDefinition::RightSideDef)
        .def_readwrite("EmptySlotColor", &UBankGFxDefinition::EmptySlotColor)
        .def_readwrite("CardCellWidth", &UBankGFxDefinition::CardCellWidth)
        .def_readwrite("CardCellHeight", &UBankGFxDefinition::CardCellHeight)
        .def_readwrite("CardTextureWidth", &UBankGFxDefinition::CardTextureWidth)
        .def_readwrite("CardTextureHeight", &UBankGFxDefinition::CardTextureHeight)
        .def_readwrite("Card1ExternalTextureMap", &UBankGFxDefinition::Card1ExternalTextureMap)
        .def_readwrite("Card2ExternalTextureMap", &UBankGFxDefinition::Card2ExternalTextureMap)
        .def("StaticClass", &UBankGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}