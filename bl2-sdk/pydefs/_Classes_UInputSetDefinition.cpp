#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputSetDefinition()
{
    class_< UInputSetDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputSetDefinition", no_init)
        .def_readwrite("InputActions", &UInputSetDefinition::InputActions)
        .def("StaticClass", &UInputSetDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}