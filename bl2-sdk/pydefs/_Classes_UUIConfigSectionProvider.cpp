#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIConfigSectionProvider()
{
    class_< UUIConfigSectionProvider, bases< UUIDataProvider >  , boost::noncopyable>("UUIConfigSectionProvider", no_init)
        .def_readwrite("SectionName", &UUIConfigSectionProvider::SectionName)
        .def("StaticClass", &UUIConfigSectionProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}