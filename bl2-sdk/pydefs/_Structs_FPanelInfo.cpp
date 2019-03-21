#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPanelInfo(py::object m)
{
    py::class_< FPanelInfo >(m, "FPanelInfo")
        .def_readwrite("PanelName", &FPanelInfo::PanelName)
        .def_readwrite("PanelFocused", &FPanelInfo::PanelFocused)
        .def_readwrite("PanelUnfocused", &FPanelInfo::PanelUnfocused)
        .def_readwrite("PanelCompare", &FPanelInfo::PanelCompare)
        .def_readwrite("PanelBackground", &FPanelInfo::PanelBackground)
        .def_readwrite("CellWidth", &FPanelInfo::CellWidth)
        .def_readwrite("CellHeight", &FPanelInfo::CellHeight)
        .def_readwrite("TextureWidth", &FPanelInfo::TextureWidth)
        .def_readwrite("TextureHeight", &FPanelInfo::TextureHeight)
  ;
}