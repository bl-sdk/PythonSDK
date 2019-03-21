#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHashDisplayGFxDefinition()
{
    class_< UHashDisplayGFxDefinition, bases< UGFxMovieDefinition >  , boost::noncopyable>("UHashDisplayGFxDefinition", no_init)
        .def_readwrite("LeftSideDef", &UHashDisplayGFxDefinition::LeftSideDef)
        .def_readwrite("EmptySlotColor", &UHashDisplayGFxDefinition::EmptySlotColor)
        .def_readwrite("CardCellWidth", &UHashDisplayGFxDefinition::CardCellWidth)
        .def_readwrite("CardCellHeight", &UHashDisplayGFxDefinition::CardCellHeight)
        .def_readwrite("CardTextureWidth", &UHashDisplayGFxDefinition::CardTextureWidth)
        .def_readwrite("CardTextureHeight", &UHashDisplayGFxDefinition::CardTextureHeight)
        .def_readwrite("Card1ExternalTextureMap", &UHashDisplayGFxDefinition::Card1ExternalTextureMap)
        .def("StaticClass", &UHashDisplayGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}