#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputContextDefinition()
{
    class_< UInputContextDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputContextDefinition", no_init)
        .def_readwrite("InputActions", &UInputContextDefinition::InputActions)
        .def_readwrite("InputSets", &UInputContextDefinition::InputSets)
        .def("StaticClass", &UInputContextDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ContainsInputAction", &UInputContextDefinition::ContainsInputAction)
        .staticmethod("StaticClass")
  ;
}