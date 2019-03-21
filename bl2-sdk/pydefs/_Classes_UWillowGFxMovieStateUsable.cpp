#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStateUsable()
{
    class_< UWillowGFxMovieStateUsable, bases< UGFxMovieState >  , boost::noncopyable>("UWillowGFxMovieStateUsable", no_init)
        .def_readwrite("UsabilityStates", &UWillowGFxMovieStateUsable::UsabilityStates)
        .def("StaticClass", &UWillowGFxMovieStateUsable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}