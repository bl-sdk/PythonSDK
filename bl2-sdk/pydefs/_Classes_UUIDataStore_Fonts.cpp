#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_Fonts()
{
    class_< UUIDataStore_Fonts, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_Fonts", no_init)
        .def("StaticClass", &UUIDataStore_Fonts::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}