#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringBase()
{
    class_< UUIDataStore_StringBase, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_StringBase", no_init)
        .def("StaticClass", &UUIDataStore_StringBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}