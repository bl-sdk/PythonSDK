#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEnvironmentTagDefinition()
{
    class_< UEnvironmentTagDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UEnvironmentTagDefinition", no_init)
        .def("StaticClass", &UEnvironmentTagDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}