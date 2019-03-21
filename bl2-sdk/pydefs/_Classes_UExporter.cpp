#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UExporter()
{
    class_< UExporter, bases< UObject >  , boost::noncopyable>("UExporter", no_init)
        .def_readonly("UnknownData00", &UExporter::UnknownData00)
        .def_readwrite("FormatExtension", &UExporter::FormatExtension)
        .def_readwrite("FormatDescription", &UExporter::FormatDescription)
        .def_readonly("UnknownData01", &UExporter::UnknownData01)
        .def("StaticClass", &UExporter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}