#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieStateFlags()
{
    class_< UGFxMovieStateFlags, bases< UGFxMovieState >  , boost::noncopyable>("UGFxMovieStateFlags", no_init)
        .def_readwrite("CustomFlags", &UGFxMovieStateFlags::CustomFlags)
        .def("StaticClass", &UGFxMovieStateFlags::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}