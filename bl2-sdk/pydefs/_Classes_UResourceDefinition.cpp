#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UResourceDefinition()
{
    class_< UResourceDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UResourceDefinition", no_init)
        .def_readwrite("ResourceName", &UResourceDefinition::ResourceName)
        .def_readwrite("DefaultResourcePoolClass", &UResourceDefinition::DefaultResourcePoolClass)
        .def_readwrite("DefaultResourcePoolDefinition", &UResourceDefinition::DefaultResourcePoolDefinition)
        .def_readwrite("ResourceContextResolver", &UResourceDefinition::ResourceContextResolver)
        .def("StaticClass", &UResourceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}