#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNameListDefinition()
{
    class_< UNameListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UNameListDefinition", no_init)
        .def_readwrite("Names", &UNameListDefinition::Names)
        .def("StaticClass", &UNameListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}