#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USoldierInputContextSelector()
{
    class_< USoldierInputContextSelector, bases< UInputContextSelectorBase >  , boost::noncopyable>("USoldierInputContextSelector", no_init)
        .def("StaticClass", &USoldierInputContextSelector::StaticClass, return_value_policy< reference_existing_object >())
        .def("SelectContext", &USoldierInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}