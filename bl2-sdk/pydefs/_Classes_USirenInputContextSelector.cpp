#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USirenInputContextSelector()
{
    class_< USirenInputContextSelector, bases< UDefaultInputContextSelector >  , boost::noncopyable>("USirenInputContextSelector", no_init)
        .def("StaticClass", &USirenInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &USirenInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}