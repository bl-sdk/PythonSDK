#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFontImportOptions()
{
    class_< UFontImportOptions, bases< UObject >  , boost::noncopyable>("UFontImportOptions", no_init)
        .def_readwrite("Data", &UFontImportOptions::Data)
        .def("StaticClass", &UFontImportOptions::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}