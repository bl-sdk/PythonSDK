#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAssassinInputContextSelector()
{
    class_< UAssassinInputContextSelector, bases< UDefaultInputContextSelector >  , boost::noncopyable>("UAssassinInputContextSelector", no_init)
        .def("StaticClass", &UAssassinInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UAssassinInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}