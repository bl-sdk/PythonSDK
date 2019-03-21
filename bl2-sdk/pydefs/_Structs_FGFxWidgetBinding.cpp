#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGFxWidgetBinding()
{
    class_< FGFxWidgetBinding >("FGFxWidgetBinding", no_init)
        .def_readwrite("WidgetName", &FGFxWidgetBinding::WidgetName)
        .def_readwrite("WidgetClass", &FGFxWidgetBinding::WidgetClass)
  ;
}