#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurrencyPresentation()
{
    class_< FCurrencyPresentation >("FCurrencyPresentation", no_init)
        .def_readwrite("Type", &FCurrencyPresentation::Type)
        .def_readwrite("WidgetFrame", &FCurrencyPresentation::WidgetFrame)
        .def_readwrite("WidgetClip", &FCurrencyPresentation::WidgetClip)
  ;
}