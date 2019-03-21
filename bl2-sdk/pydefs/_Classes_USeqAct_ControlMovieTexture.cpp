#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ControlMovieTexture()
{
    class_< USeqAct_ControlMovieTexture, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ControlMovieTexture", no_init)
        .def_readwrite("MovieTexture", &USeqAct_ControlMovieTexture::MovieTexture)
        .def("StaticClass", &USeqAct_ControlMovieTexture::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_ControlMovieTexture::eventActivated)
        .staticmethod("StaticClass")
  ;
}