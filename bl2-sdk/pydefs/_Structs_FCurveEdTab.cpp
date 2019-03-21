#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurveEdTab()
{
    py::class_< FCurveEdTab >("FCurveEdTab")
        .def_readwrite("TabName", &FCurveEdTab::TabName)
        .def_readwrite("Curves", &FCurveEdTab::Curves)
        .def_readwrite("ViewStartInput", &FCurveEdTab::ViewStartInput)
        .def_readwrite("ViewEndInput", &FCurveEdTab::ViewEndInput)
        .def_readwrite("ViewStartOutput", &FCurveEdTab::ViewStartOutput)
        .def_readwrite("ViewEndOutput", &FCurveEdTab::ViewEndOutput)
  ;
}