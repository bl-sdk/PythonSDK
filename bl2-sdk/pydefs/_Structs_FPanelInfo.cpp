#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPanelInfo()
{
    class_< FPanelInfo >("FPanelInfo", no_init)
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