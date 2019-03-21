#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_LoadingMovie()
{
    class_< USeqAct_LoadingMovie, bases< USequenceAction >  , boost::noncopyable>("USeqAct_LoadingMovie", no_init)
        .def_readwrite("MovieName", &USeqAct_LoadingMovie::MovieName)
        .def_readwrite("PauseDuration", &USeqAct_LoadingMovie::PauseDuration)
        .def_readwrite("KeepPlayingDuration", &USeqAct_LoadingMovie::KeepPlayingDuration)
        .def("StaticClass", &USeqAct_LoadingMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}