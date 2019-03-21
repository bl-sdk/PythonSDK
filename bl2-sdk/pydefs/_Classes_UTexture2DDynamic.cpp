#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTexture2DDynamic()
{
    class_< UTexture2DDynamic, bases< UTexture >  , boost::noncopyable>("UTexture2DDynamic", no_init)
        .def_readwrite("SizeX", &UTexture2DDynamic::SizeX)
        .def_readwrite("SizeY", &UTexture2DDynamic::SizeY)
        .def_readwrite("Format", &UTexture2DDynamic::Format)
        .def_readwrite("NumMips", &UTexture2DDynamic::NumMips)
        .def("StaticClass", &UTexture2DDynamic::StaticClass, return_value_policy< reference_existing_object >())
        .def("Create", &UTexture2DDynamic::Create, return_value_policy< reference_existing_object >())
        .def("Init", &UTexture2DDynamic::Init)
        .staticmethod("StaticClass")
  ;
}