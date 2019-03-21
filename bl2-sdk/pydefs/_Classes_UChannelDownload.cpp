#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChannelDownload()
{
    class_< UChannelDownload, bases< UDownload >  , boost::noncopyable>("UChannelDownload", no_init)
        .def_readonly("UnknownData00", &UChannelDownload::UnknownData00)
        .def("StaticClass", &UChannelDownload::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}