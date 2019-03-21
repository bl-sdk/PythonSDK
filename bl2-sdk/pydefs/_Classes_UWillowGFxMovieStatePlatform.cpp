#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStatePlatform()
{
    class_< UWillowGFxMovieStatePlatform, bases< UGFxMovieState >  , boost::noncopyable>("UWillowGFxMovieStatePlatform", no_init)
        .def_readwrite("PlatformStates", &UWillowGFxMovieStatePlatform::PlatformStates)
        .def("StaticClass", &UWillowGFxMovieStatePlatform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}