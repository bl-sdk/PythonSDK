#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPursuitGridDefinition()
{
    class_< UWillowPursuitGridDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowPursuitGridDefinition", no_init)
        .def_readwrite("PursuitNodes", &UWillowPursuitGridDefinition::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGridDefinition::GridName)
        .def("StaticClass", &UWillowPursuitGridDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}