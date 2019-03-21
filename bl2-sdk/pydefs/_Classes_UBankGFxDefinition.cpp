#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBankGFxDefinition()
{
    class_< UBankGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UBankGFxDefinition", no_init)
        .def_readwrite("LeftSideDef", &UBankGFxDefinition::LeftSideDef)
        .def_readwrite("RightSideDef", &UBankGFxDefinition::RightSideDef)
        .def_readwrite("EmptySlotColor", &UBankGFxDefinition::EmptySlotColor)
        .def_readwrite("CardCellWidth", &UBankGFxDefinition::CardCellWidth)
        .def_readwrite("CardCellHeight", &UBankGFxDefinition::CardCellHeight)
        .def_readwrite("CardTextureWidth", &UBankGFxDefinition::CardTextureWidth)
        .def_readwrite("CardTextureHeight", &UBankGFxDefinition::CardTextureHeight)
        .def_readwrite("Card1ExternalTextureMap", &UBankGFxDefinition::Card1ExternalTextureMap)
        .def_readwrite("Card2ExternalTextureMap", &UBankGFxDefinition::Card2ExternalTextureMap)
        .def("StaticClass", &UBankGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}