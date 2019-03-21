#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_Settings()
{
    class_< UUIDataStore_Settings, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_Settings", no_init)
        .def("StaticClass", &UUIDataStore_Settings::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}