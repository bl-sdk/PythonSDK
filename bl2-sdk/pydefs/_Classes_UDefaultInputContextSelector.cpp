#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDefaultInputContextSelector()
{
    class_< UDefaultInputContextSelector, bases< UInputContextSelectorBase >  , boost::noncopyable>("UDefaultInputContextSelector", no_init)
        .def("StaticClass", &UDefaultInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UDefaultInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}