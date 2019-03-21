#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameInfoAttributeContextResolver()
{
    class_< UGameInfoAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UGameInfoAttributeContextResolver", no_init)
        .def("StaticClass", &UGameInfoAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}