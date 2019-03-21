#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextBuffer()
{
    class_< UTextBuffer, bases< UObject >  , boost::noncopyable>("UTextBuffer", no_init)
        .def_readonly("UnknownData00", &UTextBuffer::UnknownData00)
        .def("StaticClass", &UTextBuffer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}