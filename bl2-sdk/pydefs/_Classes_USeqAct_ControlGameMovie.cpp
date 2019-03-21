#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ControlGameMovie()
{
    class_< USeqAct_ControlGameMovie, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_ControlGameMovie", no_init)
        .def_readwrite("MovieName", &USeqAct_ControlGameMovie::MovieName)
        .def_readwrite("StartOfRenderingMovieFrame", &USeqAct_ControlGameMovie::StartOfRenderingMovieFrame)
        .def_readwrite("EndOfRenderingMovieFrame", &USeqAct_ControlGameMovie::EndOfRenderingMovieFrame)
        .def("StaticClass", &USeqAct_ControlGameMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}