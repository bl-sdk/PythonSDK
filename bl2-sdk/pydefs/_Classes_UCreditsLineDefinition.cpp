#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCreditsLineDefinition()
{
    class_< UCreditsLineDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UCreditsLineDefinition", no_init)
        .def_readwrite("LinkageName", &UCreditsLineDefinition::LinkageName)
        .def("StaticClass", &UCreditsLineDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}