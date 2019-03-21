#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UKeyedItemPoolDefinition()
{
    class_< UKeyedItemPoolDefinition, bases< UItemPoolDefinition >  , boost::noncopyable>("UKeyedItemPoolDefinition", no_init)
        .def_readwrite("Key", &UKeyedItemPoolDefinition::Key)
        .def("StaticClass", &UKeyedItemPoolDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}