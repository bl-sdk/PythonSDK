#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownload()
{
    class_< UDownload, bases< UObject >  , boost::noncopyable>("UDownload", no_init)
        .def_readonly("UnknownData00", &UDownload::UnknownData00)
        .def("StaticClass", &UDownload::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}