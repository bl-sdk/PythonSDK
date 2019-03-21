#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemOfTheDayPanelGFxObject()
{
    class_< UItemOfTheDayPanelGFxObject, bases< UGFxObject >  , boost::noncopyable>("UItemOfTheDayPanelGFxObject", no_init)
        .def_readwrite("VendingMachineMovie", &UItemOfTheDayPanelGFxObject::VendingMachineMovie)
        .def_readwrite("CellThumbnail", &UItemOfTheDayPanelGFxObject::CellThumbnail)
        .def_readwrite("CustomMovieClip", &UItemOfTheDayPanelGFxObject::CustomMovieClip)
        .def("StaticClass", &UItemOfTheDayPanelGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCellObject", &UItemOfTheDayPanelGFxObject::GetCellObject, return_value_policy< reference_existing_object >())
        .def("extOnIOTDPress", &UItemOfTheDayPanelGFxObject::extOnIOTDPress)
        .def("extOnIOTDRollOut", &UItemOfTheDayPanelGFxObject::extOnIOTDRollOut)
        .def("extOnIOTDRollOver", &UItemOfTheDayPanelGFxObject::extOnIOTDRollOver)
        .def("SetCellStatus", &UItemOfTheDayPanelGFxObject::SetCellStatus)
        .def("SetBackgroundClip", &UItemOfTheDayPanelGFxObject::SetBackgroundClip)
        .def("SetBackground", &UItemOfTheDayPanelGFxObject::SetBackground)
        .def("SetRarityColor", &UItemOfTheDayPanelGFxObject::SetRarityColor)
        .def("SetItemOfTheDayItem", &UItemOfTheDayPanelGFxObject::SetItemOfTheDayItem)
        .def("SetSelected", &UItemOfTheDayPanelGFxObject::SetSelected)
        .def("SetCellData", &UItemOfTheDayPanelGFxObject::SetCellData)
        .def("SetTimeRemaining", &UItemOfTheDayPanelGFxObject::SetTimeRemaining)
        .def("SetVisibility", &UItemOfTheDayPanelGFxObject::SetVisibility)
        .def("SetLocalizedStrings", &UItemOfTheDayPanelGFxObject::SetLocalizedStrings)
        .def("Cleanup", &UItemOfTheDayPanelGFxObject::Cleanup)
        .def("InitLabels", &UItemOfTheDayPanelGFxObject::InitLabels)
        .def("Init", &UItemOfTheDayPanelGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}