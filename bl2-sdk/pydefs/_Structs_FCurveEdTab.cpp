#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurveEdTab()
{
    class_< FCurveEdTab >("FCurveEdTab", no_init)
        .def_readwrite("TabName", &FCurveEdTab::TabName)
        .def_readwrite("Curves", &FCurveEdTab::Curves)
        .def_readwrite("ViewStartInput", &FCurveEdTab::ViewStartInput)
        .def_readwrite("ViewEndInput", &FCurveEdTab::ViewEndInput)
        .def_readwrite("ViewStartOutput", &FCurveEdTab::ViewStartOutput)
        .def_readwrite("ViewEndOutput", &FCurveEdTab::ViewEndOutput)
  ;
}