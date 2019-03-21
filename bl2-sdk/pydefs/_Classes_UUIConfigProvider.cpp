#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIConfigProvider()
{
    class_< UUIConfigProvider, bases< UUIDataProvider >  , boost::noncopyable>("UUIConfigProvider", no_init)
        .def("StaticClass", &UUIConfigProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}