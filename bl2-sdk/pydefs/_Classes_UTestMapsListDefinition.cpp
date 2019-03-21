#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTestMapsListDefinition()
{
    class_< UTestMapsListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UTestMapsListDefinition", no_init)
        .def_readwrite("ListItems", &UTestMapsListDefinition::ListItems)
        .def("StaticClass", &UTestMapsListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}