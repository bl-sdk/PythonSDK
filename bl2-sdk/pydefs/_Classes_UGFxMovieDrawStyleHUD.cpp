#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleHUD()
{
    class_< UGFxMovieDrawStyleHUD, bases< UGFxMovieDrawStyle >  , boost::noncopyable>("UGFxMovieDrawStyleHUD", no_init)
        .def_readwrite("AnchorPoints", &UGFxMovieDrawStyleHUD::AnchorPoints)
        .def_readonly("MovieDimensions", &UGFxMovieDrawStyleHUD::MovieDimensions)
        .def_readonly("MovieScreenPos", &UGFxMovieDrawStyleHUD::MovieScreenPos)
        .def("StaticClass", &UGFxMovieDrawStyleHUD::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleHUD::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}