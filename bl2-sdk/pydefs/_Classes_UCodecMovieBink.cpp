#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCodecMovieBink()
{
    class_< UCodecMovieBink, bases< UCodecMovie >  , boost::noncopyable>("UCodecMovieBink", no_init)
        .def_readonly("UnknownData00", &UCodecMovieBink::UnknownData00)
        .def("StaticClass", &UCodecMovieBink::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}