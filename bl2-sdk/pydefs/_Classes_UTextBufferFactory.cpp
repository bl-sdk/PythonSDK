#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextBufferFactory()
{
    class_< UTextBufferFactory, bases< UFactory >  , boost::noncopyable>("UTextBufferFactory", no_init)
        .def("StaticClass", &UTextBufferFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}