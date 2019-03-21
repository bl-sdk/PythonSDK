#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieStateCustom()
{
    class_< UGFxMovieStateCustom, bases< UGFxMovieState >  , boost::noncopyable>("UGFxMovieStateCustom", no_init)
        .def_readwrite("CustomStates", &UGFxMovieStateCustom::CustomStates)
        .def("StaticClass", &UGFxMovieStateCustom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}