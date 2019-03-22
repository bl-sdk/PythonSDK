#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemOfTheDayPanelGFxObject(py::module &m)
{
    py::class_< UItemOfTheDayPanelGFxObject,  UGFxObject   >(m, "UItemOfTheDayPanelGFxObject")
        .def_readwrite("VendingMachineMovie", &UItemOfTheDayPanelGFxObject::VendingMachineMovie)
        .def_readwrite("CellThumbnail", &UItemOfTheDayPanelGFxObject::CellThumbnail)
        .def_readwrite("CustomMovieClip", &UItemOfTheDayPanelGFxObject::CustomMovieClip)
        .def("GetCellObject", &UItemOfTheDayPanelGFxObject::GetCellObject, py::return_value_policy::reference)
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
          ;
}