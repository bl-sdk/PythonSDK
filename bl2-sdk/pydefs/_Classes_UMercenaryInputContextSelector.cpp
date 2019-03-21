#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMercenaryInputContextSelector()
{
    class_< UMercenaryInputContextSelector, bases< UDefaultInputContextSelector >  , boost::noncopyable>("UMercenaryInputContextSelector", no_init)
        .def("StaticClass", &UMercenaryInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &UMercenaryInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}