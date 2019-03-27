#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCardInfoRelativeToPanel(py::module &m)
{
    py::class_< FCardInfoRelativeToPanel >(m, "FCardInfoRelativeToPanel")
        .def_readwrite("PanelName", &FCardInfoRelativeToPanel::PanelName)
        .def_readwrite("ComparePosition", &FCardInfoRelativeToPanel::ComparePosition)
        .def_readwrite("CompareScale", &FCardInfoRelativeToPanel::CompareScale)
  ;
}