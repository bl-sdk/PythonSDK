#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIConfigFileProvider()
{
    class_< UUIConfigFileProvider, bases< UUIConfigProvider >  , boost::noncopyable>("UUIConfigFileProvider", no_init)
        .def_readwrite("Sections", &UUIConfigFileProvider::Sections)
        .def_readwrite("ConfigFileName", &UUIConfigFileProvider::ConfigFileName)
        .def("StaticClass", &UUIConfigFileProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}