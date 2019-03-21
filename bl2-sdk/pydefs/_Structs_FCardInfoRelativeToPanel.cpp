#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCardInfoRelativeToPanel()
{
    py::class_< FCardInfoRelativeToPanel >("FCardInfoRelativeToPanel")
        .def_readwrite("PanelName", &FCardInfoRelativeToPanel::PanelName)
        .def_readwrite("ComparePosition", &FCardInfoRelativeToPanel::ComparePosition)
        .def_readwrite("CompareScale", &FCardInfoRelativeToPanel::CompareScale)
  ;
}