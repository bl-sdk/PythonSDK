#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTradingGFxDefinition()
{
    class_< UTradingGFxDefinition, bases< UWillowInventoryGFxDefinition >  , boost::noncopyable>("UTradingGFxDefinition", no_init)
        .def("StaticClass", &UTradingGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}