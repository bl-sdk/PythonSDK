#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVendingMachineExGFxDefinition(py::module &m)
{
    py::class_< UVendingMachineExGFxDefinition,  UWillowInventoryGFxDefinition   >(m, "UVendingMachineExGFxDefinition")
		.def_static("StaticClass", &UVendingMachineExGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomStoragePanelTint", &UVendingMachineExGFxDefinition::CustomStoragePanelTint)
        .def_readwrite("CustomStoragePanelHeaderIcon", &UVendingMachineExGFxDefinition::CustomStoragePanelHeaderIcon)
        .def_readwrite("CellWidth", &UVendingMachineExGFxDefinition::CellWidth)
        .def_readwrite("CellHeight", &UVendingMachineExGFxDefinition::CellHeight)
        .def_readwrite("TextureWidth", &UVendingMachineExGFxDefinition::TextureWidth)
        .def_readwrite("TextureHeight", &UVendingMachineExGFxDefinition::TextureHeight)
        .def_readwrite("TextureNamePlayer0", &UVendingMachineExGFxDefinition::TextureNamePlayer0)
        .def_readwrite("TextureNamePlayer1", &UVendingMachineExGFxDefinition::TextureNamePlayer1)
        .def_readwrite("CustomIOTDMovie", &UVendingMachineExGFxDefinition::CustomIOTDMovie)
        .def_readwrite("CustomHeaderStyle", &UVendingMachineExGFxDefinition::CustomHeaderStyle)
        .def_readwrite("CustomIOTDVisitLabel", &UVendingMachineExGFxDefinition::CustomIOTDVisitLabel)
        .def_readwrite("bUseAdvancedCustomStoragePanelTint", &UVendingMachineExGFxDefinition::bUseAdvancedCustomStoragePanelTint)
        .def_readwrite("AdvancedCustomTint", &UVendingMachineExGFxDefinition::AdvancedCustomTint)
          ;
}