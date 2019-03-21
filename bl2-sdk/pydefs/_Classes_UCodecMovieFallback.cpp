#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCodecMovieFallback()
{
    class_< UCodecMovieFallback, bases< UCodecMovie >  , boost::noncopyable>("UCodecMovieFallback", no_init)
        .def_readwrite("CurrentTime", &UCodecMovieFallback::CurrentTime)
        .def("StaticClass", &UCodecMovieFallback::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}