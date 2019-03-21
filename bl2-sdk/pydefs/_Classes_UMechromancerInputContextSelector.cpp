#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMechromancerInputContextSelector()
{
    class_< UMechromancerInputContextSelector, bases< UDefaultInputContextSelector >  , boost::noncopyable>("UMechromancerInputContextSelector", no_init)
        .def("StaticClass", &UMechromancerInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UMechromancerInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}