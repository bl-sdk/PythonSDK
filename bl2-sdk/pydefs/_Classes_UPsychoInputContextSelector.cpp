#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPsychoInputContextSelector()
{
    class_< UPsychoInputContextSelector, bases< UDefaultInputContextSelector >  , boost::noncopyable>("UPsychoInputContextSelector", no_init)
        .def("StaticClass", &UPsychoInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UPsychoInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}