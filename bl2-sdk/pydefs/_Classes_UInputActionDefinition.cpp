#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputActionDefinition()
{
    class_< UInputActionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputActionDefinition", no_init)
        .def_readwrite("OnBegin", &UInputActionDefinition::OnBegin)
        .def_readwrite("OnEnd", &UInputActionDefinition::OnEnd)
        .def_readwrite("ActionName", &UInputActionDefinition::ActionName)
        .def("StaticClass", &UInputActionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}