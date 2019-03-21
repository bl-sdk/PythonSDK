#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UINounAttributeProvider()
{
    class_< UINounAttributeProvider, bases< UInterface >  , boost::noncopyable>("UINounAttributeProvider", no_init)
        .def("StaticClass", &UINounAttributeProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}