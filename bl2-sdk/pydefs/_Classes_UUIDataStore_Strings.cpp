#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_Strings()
{
    class_< UUIDataStore_Strings, bases< UUIDataStore_StringBase >  , boost::noncopyable>("UUIDataStore_Strings", no_init)
        .def_readwrite("LocFileProviders", &UUIDataStore_Strings::LocFileProviders)
        .def("StaticClass", &UUIDataStore_Strings::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}